#include "main.h"

/**
 * _memcpy - Copies n bytes from src to dest
 * @dest: Pointer to the destination memory area
 * @src: Pointer to the source memory area
 * @n: Number of bytes to be copied
 *
 * Return: Pointer to the destination memory area (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	/* Iterate over each byte up to n */
	for (i = 0; i < n; i++)
	{
		/* Copy the byte from src to dest */
		dest[i] = src[i];
	}

	return (dest);
}
