#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to the memory area to be filled.
 * @b: The constant byte to fill the memory with.
 * @n: Number of bytes to be filled.
 *
 * Return: A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	/* Iterate over each byte in the memory area */
	for (i = 0; i < n; i++)
	{
		/* Fill the current byte with the constant byte */
		s[i] = b;
	}

	/* Return the pointer to the memory area */
	return (s);
}
