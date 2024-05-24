#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 *               using the Jump search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	/* iterates through the array in steps of step until the value at */
	/* the current index exceeds the target value or the end of the array */
	/* is reached. */
	while (array[prev] < value && prev < size)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev += step;
	}

	/* Once the search interval containing the target value is found, it */
	/* performs a linear search within that interval */
	printf("Value found between indexes [%lu] and [%lu]\n", prev - step, prev);

	for (i = prev - step; i <= (prev < size ? prev : size - 1); i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
