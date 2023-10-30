#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars and
 * initializes it with a specific char
 * @size: size of the array
 * @c: character to initialize the array with
 *
 * Return: pointer to the created array,
 * or NULL if size is 0 or memory allocation fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL); /* Return NULL if size is 0*/
	}
	/* Allocate memory for the array*/
	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL); /* Return NULL if memory allocation fails*/
	}

	/* Initialize each element with the specified char*/
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array); /* Return a pointer to the array*/
}
