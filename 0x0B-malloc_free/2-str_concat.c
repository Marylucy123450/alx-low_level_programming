#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * strlen - Calculate the lengths of string
 *
 * Return: pointer to the concatenated string,
 * or NULL if memory allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, i, j;
	char *concatenated;

	/* Treat NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the lengths of s1 and s2 */
	len1 = strlen(s1);
	len2 = strlen(s2);

	/* Allocate memory for the concatenated string */
	concatenated = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	/* Check if memory allocation fails */
	if (concatenated == NULL)
		return (NULL);

	/* Copy the contents of s1 to the concatenated string */
	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];

	/* Copy the contents of s2 to the concatenated string */
	for (j = 0; j < len2; j++)
		concatenated[i + j] = s2[j];

	/* Add the null terminator */
	concatenated[i + j] = '\0';

	/* Return a pointer to the concatenated string */
	return (concatenated);
}
