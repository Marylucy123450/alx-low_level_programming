#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array using
 *                       the Exponential search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, start, end; /* Initialize the bound to 1 */

	if (array == NULL || size == 0)
		return (-1);

	/* Find the range where the value may be present */
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2; /* Double the bound */
	}

	/* Perform binary search within the found range */
	start = bound / 2; /* Starting index for binary search */
	/* Ending index for binary search */
	end = bound < size - 1 ? bound : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", start, end);
	return (binary_search_recursive(array, start, end, value));
}

/**
 * binary_search_recursive - Searches for a value in a sorted array using
 *                           binary search recursively
 * @array: Pointer to the first element of the array to search in
 * @start: Starting index of the subarray to search in
 * @end: Ending index of the subarray to search in
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int binary_search_recursive(int *array, size_t start, size_t end, int value)
{
	size_t mid, i;

	if (array == NULL || start > end)
		return (-1);

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
			printf(", ");
	}
	printf("\n");

	mid = start + (end - start) / 2;

	if (array[mid] == value)
		return (mid);

	/* If value is smaller than the middle element, search in the left half */
	if (array[mid] > value)
		return (binary_search_recursive(array, start, mid - 1, value));

	/* If value is greater than the middle element, search in the right half */
	return (binary_search_recursive(array, mid + 1, end, value));
}
