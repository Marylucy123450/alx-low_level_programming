#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
