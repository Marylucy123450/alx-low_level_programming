#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be found.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	/* Edge case: if needle is an empty string, return haystack */
	if (*needle == '\0')
		return (haystack);

	/* Loop through each character in haystack */
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		/* Check if current characters match */
		while (*n && *h == *n)
		{
			h++;
			n++;
		}

		/* If we reached the end of needle, substring is found */
		if (*n == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}
