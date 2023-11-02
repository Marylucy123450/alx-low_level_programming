#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, concat_len;
	char *concat_str;

	/* Check if s1 is NULL, treat it as an empty string */
	if (s1 == NULL)
		s1 = "";

	/* Check if s2 is NULL, treat it as an empty string */
	if (s2 == NULL)
		s2 = "";

	/* Calculate the lengths of s1 and s2 */
	len1 = strlen(s1);
	len2 = strlen(s2);

	/* If n is greater or equal to length of s2, use the entire string */
	if (n >= len2)
		n = len2;

	/* Calculate the length of the concatenated string */
	concat_len = len1 + n;

	/* Allocate memory for the concatenated string */
	concat_str = malloc((concat_len + 1) * sizeof(char));

	/* Check if malloc failed (returned NULL) */
	if (concat_str == NULL)
		return (NULL);

	/* Copy s1 to the concatenated string */
	strcpy(concat_str, s1);

	/* Copy the first n bytes of s2 to the concatenated string */
	strncat(concat_str, s2, n);

	/* Null-terminate the concatenated string */
	concat_str[concat_len] = '\0';

	/* Return the concatenated string */
	return (concat_str);
}
