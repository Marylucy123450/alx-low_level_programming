#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The string containing the characters to be matched.
 *
 * Return: The number of bytes in the initial segment of @s which consist only
 *         of bytes from @accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 1;

	/* Loop through each character in @s */
	while (*s && found)
	{
		char *a = accept;

		found = 0;

		/* Loop through each character in @accept */
		while (*a)
		{
			/* Check if character in @s matches char in @accept */
			if (*s == *a)
			{
				count++;
				found = 1;
				break;
			}
			a++;
		}

		s++;
	}

	return (count);
}
