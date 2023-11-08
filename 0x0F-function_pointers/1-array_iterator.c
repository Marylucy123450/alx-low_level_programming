#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array
 * @array: Pointer to the array of integers
 * @size: Size of the array
 * @action: Pointer to the function to be executed on each element
 *
 * Description: This function takes an array, its size, and a function pointer
 *              as parameters. It checks for null pointers and then iterates
 *              over each element of the array, calling the function pointed
 *              to by 'action' with the current element as an argument.
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	/* Check if array or action is a null pointer */
	if (array == NULL || action == NULL)
		return;

	/* Iterate over each element of the array */
	for (i = 0; i < size; i++)
	{
		/* Call function pointed to by action with current element */
		action(array[i]);
	}
}
