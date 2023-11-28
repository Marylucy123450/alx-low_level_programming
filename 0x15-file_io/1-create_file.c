#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - Create a function that creates a file.
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 *         if filename is NULL return -1
 */

int create_file(const char *filename, char *text_content)
{
	int fileDescriptor;
	ssize_t bytesWritten;
	int len = 0;

	/* Check if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* Calculate the length of the text content */
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	/* Open the file in write-only mode, create it if it doesn't exist*/
	/* call the open system call to open the file specified by */
	/*filename. The O_WRONLY flag indicates that the file will be*/
	/*opened in write-only mode. The O_CREAT flag specifies that */
	/*the file should be created if it doesn't already exist. */
	/*The O_TRUNC flag ensures that file is truncated (emptied)*/
	/*if it already exists.set permissions to 0600 */
	/*the permissions to rw-------, allowing read and write */
	/*access only for the file owner.*/
	fileDescriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fileDescriptor == -1)/*cannot open*/
		return (-1);
	/* If text_content is not NULL, write the content to the file */
	if (text_content != NULL)
	{
		bytesWritten = write(fileDescriptor, text_content, len);
		if (bytesWritten == -1)
		{
			close(fileDescriptor);
			return (-1);
		}
	}
	/* Close the file descriptor */
	close(fileDescriptor);
	return (1);
}
