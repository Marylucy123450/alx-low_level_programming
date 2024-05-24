#include "main.h"

/**
 * reset_to_98 - a function that takes a pointer to an int as parameter
 * and updates the value it points to to 98
 * @n: pointer to be reset
 * Return: void
 */

void reset_to_98(int *n)
{
	if (n != NULL)
	{
		*n = 98;
	}
}
