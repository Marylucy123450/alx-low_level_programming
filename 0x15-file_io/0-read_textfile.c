#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - Write a function that reads a text file and
 * prints it to the POSIX standard output
 *
 * @filename: text file to read
 * @letters: the number of letters it should read and print
 *           if the file can not be opened or read, return 0
 *           if filename is NULL return 0
 *           if write fails or doesnt write expected amount of bytes, return 0
 *
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytesRead, bytesWritten;
	char *buffer;
	int fileDescriptor;

	/* Check if filename is NULL */
	if (filename == NULL)
		return (0);

	/* Open the file in read-only mode */
	fileDescriptor = open(filename, O_RDONLY);
	if (fileDescriptor == -1)/*cannot open*/
		return (0);

	/* Allocate memory for the buffer */
	buffer = malloc(sizeof(char) * letters);

	/*declares a character array called buffer with a size of letters.*/
	/*maximum number of characters to read from the file*/
	/* Read data from the file into the buffer */
	/* The read system call is used to read data from the file associated */
	/*with fileDescriptor. It reads up to sizeof(buffer) bytes from the */
	/*file and stores them in the buffer array. The actual number of bytes*/
	/*read is assigned to the bytesRead variable.*/
	bytesRead = read(fileDescriptor, buffer, letters);
	if (bytesRead == -1)
	{
		close(fileDescriptor);
		return (0);
	}
	/* Write the content of the buffer to the standard output */
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	/* Check if the write operation was successful */
	if (bytesWritten == -1 || bytesWritten != bytesRead)
		return (0);
	/* Free the allocated buffer memory */
	free(buffer);
	/* Close the file descriptor */
	close(fileDescriptor);
	/* Return the number of bytes written */
	return (bytesWritten);
}
