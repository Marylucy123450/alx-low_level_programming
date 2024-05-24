#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The string containing the characters to be matched.
 *
 * Return: A pointer to the byte in @s that
 * matches one of the bytes in @accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	/* Loop through each character in @s */
	while (*s)
	{
		char *a = accept;

		/* Loop through each character in @accept */
		while (*a)
		{
			/* Check if character in @s matches char in @accept */
			if (*s == *a)
				return (s);

			a++;
		}

		s++;
	}

	return (NULL);
}
