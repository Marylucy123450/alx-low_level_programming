#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}


/**
 * advanced_binary_recursive - Recursively search for a value in a sorted array
 * @array: Pointer to the first element of the array to search in
 * @left: Index of the left boundary
 * @right: Index of the right boundary
 * @value: The value to search for
 *
 * Return: Index where the value is located, or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	if (left > right)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");

	mid = (left + right) / 2;

	if (array[mid] == value)
	{
		if (mid == 0 || array[mid - 1] != value)
			return (mid);
		return (advanced_binary_recursive(array, left, mid, value));
	}
	else if (array[mid] < value)
		return (advanced_binary_recursive(array, mid + 1, right, value));
	else
		return (advanced_binary_recursive(array, left, mid, value));
}
