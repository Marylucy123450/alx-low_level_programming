#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array to be reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int temp;

	/* Swap elements from start and end until they meet in the middle */
	while (start < end)
	{
		/* Swap elements using a temporary variable */
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		/* Move start and end towards the middle */
		start++;
		end--;
	}
}
