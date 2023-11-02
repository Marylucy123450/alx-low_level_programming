#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value (included)
 * @max: maximum value (included)
 *
 * Return: pointer to the newly created array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *arr, i, size;

	/* Check if min > max */
	if (min > max)
		return (NULL);

	/* Calculate the size of the array */
	size = max - min + 1;

	/* Allocate memory for the array */
	arr = malloc(size * sizeof(int));

	/* Check if malloc failed (returned NULL) */
	if (arr == NULL)
		return (NULL);

	/* Initialize the array with values from min to max */
	for (i = 0; i < size; i++)
		arr[i] = min++;

	/* Return the pointer to the newly created array */
	return (arr);
}
