#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all arguments of the program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to the concatenated string,
 * or NULL if memory allocation fails or ac is 0
 */
char *argstostr(int ac, char **av)
{
	int i, j, total_length = 0;
	char *concatenated;
	int position;

	/* Check if ac is 0 or av is NULL */
	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]);
	}

	/* Add space for newline characters and null terminator */
	total_length += ac + 1;

	/* Allocate memory for the concatenated string */
	concatenated = (char *)malloc(total_length * sizeof(char));

	/* Check if memory allocation fails */
	if (concatenated == NULL)
		return (NULL);

	/* Copy each argument to the concatenated string */
	position = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concatenated[position++] = av[i][j];
		}
		concatenated[position++] = '\n';
	}

	/* Add the null terminator */
	concatenated[position] = '\0';

	return (concatenated);
}
