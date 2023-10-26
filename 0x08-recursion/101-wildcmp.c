#include "main.h"

/**
 * wildcmp - compares two strings considering the special character *
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if the strings are identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	/* Base case: If s1 is empty */
	if (*s1 == '\0')
	{
		/* If s2 is not empty and s2 has a wildcard '*',*/
		/* move to the next character in s2 */
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		/* If s2 also empty, the strings can be considered identical */
		return (*s2 == '\0');
	}

	/* If s2 has a wildcard '*', consider two cases: */
	/* match s1 with and without the current character in s2 */
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	/* If the current characters of s1 and s2 match, */
	/*move to the next characters */
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	/* If none of above conditions are met, the strings are not identical */
	return (0);
}
