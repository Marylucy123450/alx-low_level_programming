#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates a string
 * @str: string to be duplicated
 * strlen - Calculate the length of the string
 *
 * Return: pointer to the duplicated string,
 * or NULL if str is NULL or memory allocation fails
 */
char *_strdup(char *str)
{
	unsigned int len, i;
	char *duplicate;

	/* Check if str is NULL */
	if (str == NULL)
	{
		return (NULL);
	}

	/* Calculate the length of the string */
	len = strlen(str);

	/* Allocate memory for the duplicate string */
	duplicate = (char *)malloc((len + 1) * sizeof(char));

	/* Check if memory allocation fails */
	if (duplicate == NULL)
	{
		return (NULL);
	}

	/* Copy the contents of the original string to the duplicate */
	for (i = 0; i < len; i++)
	{
		duplicate[i] = str[i];
	}

	/* Add the null terminator */
	duplicate[len] = '\0';

	/* Return a pointer to the duplicate string */
	return (duplicate);
}
