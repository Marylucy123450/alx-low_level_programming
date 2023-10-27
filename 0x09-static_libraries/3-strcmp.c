#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return:
 *   - 0 if the strings are equal.
 *   - a negative value if s1 is less than s2.
 *   - a positive value if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	/* Compare characters until a mismatch is found or end of strings */
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	/* Return the difference between the mismatched characters */
	return (*s1 - *s2);
}
