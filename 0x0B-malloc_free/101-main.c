#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))/* Calculate the length of the input string */
		len++;
	words = count_word(str);/* Count the number of words in input string */
	if (words == 0)
		return (NULL);
	/* Allocate memory for the matrix of words */
	matrix = (char **)malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)/* Iterate string to split it into words */
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)/* Check if a word has been found */
			{
				end = i;
				/* Allocate memory for the word */
				tmp = (char *)malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				/* Copy the word into the allocated memory */
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				/* Store the word in the matrix */
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;/* Set the last element of the matrix to NULL */

	return (matrix);
}
