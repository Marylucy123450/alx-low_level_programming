#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/* Function prototypes */

/* Read a text file and print it to the POSIX standard output */
ssize_t read_textfile(const char *filename, size_t letters);

/* Create a file and write the given text content to it */
int create_file(const char *filename, char *text_content);

/* Append the given text content to an existing file */
int append_text_to_file(const char *filename, char *text_content);

char *create_buffer(char *file);
void close_file(int fd);

#endif
