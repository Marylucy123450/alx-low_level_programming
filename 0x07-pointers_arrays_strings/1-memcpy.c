#include "main.h"

/**
 * _memcpy -  Copies n bytes from src to dest
 * @dest: Pointer to the destination memory area.
 * @src: Pointer to the source memory area.
 * @n: Number of bytes to be copied.
 *
 * Return: A pointer to the destination memory area @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;  /* Loop counter */
	unsigned int remaining_bytes = n;
	/* Number of remaining bytes to be copied */

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];  /* Copy each byte from source to destination */
		remaining_bytes--;  /* Decrement the remaining bytes count */
	}

	return (dest);  /* Return the pointer to the destination memory area */
}
