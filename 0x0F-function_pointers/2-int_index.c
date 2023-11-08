#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Searches for an integer in an array
 * @array: Pointer to the array of integers
 * @size: Number of elements in the array
 * @cmp: Pointer to the function used to compare values
 *
 * Description: This function takes an array, its size, and a function pointer
 *              as parameters. It searches for an integer in the array by
 *              calling the comparison function 'cmp' on each element until a
 *              match is found. It returns the index of the first matching
 *              element.
 *
 * Return: 0 if successful, If no element matches or if size less than or equal
 *              to 0, it returns -1.
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/* Check if size is less than or equal to 0 */
	if (size <= 0)
		return (-1);

	/* Check if array or cmp is a null pointer */
	if (array == NULL || cmp == NULL)
		return (-1);

	/* Iterate over each element of the array */
	for (i = 0; i < size; i++)
	{
		/* Call the cmp function on the current element */
		if (cmp(array[i]) != 0)
			return (i);
	}

	/* No element matches */
	return (-1);
}
