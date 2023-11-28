#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
/**
 * append_text_to_file - Write a function that appends text at the end of file
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileDescriptor;
	ssize_t bytesWritten;


	/* Check if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* Check if text_content is NULL */
	if (text_content == NULL)
		return (1);

	/* Open the file in append mode */
	fileDescriptor = open(filename, O_WRONLY | O_APPEND);
	if (fileDescriptor == -1)
		return (-1);

	/* Write the content to the file */
	bytesWritten = write(fileDescriptor, text_content, strlen(text_content));


	/* Check if the write operation was successful */
	if (bytesWritten == -1)
		return (-1);

	close(fileDescriptor);
	return (1);
}
