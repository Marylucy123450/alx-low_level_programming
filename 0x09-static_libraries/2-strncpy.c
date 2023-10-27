#include "main.h"

/**
 * _strncpy - Copies a string from src to dest, with a maximum of n characters.
 * @dest: The destination string.
 * @src: The source string to be copied.
 * @n: The maximum number of characters to be copied.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy characters from src to dest up to n or until null byte*/
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* If n is greater than the length of src, pad dest with null bytes */
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
