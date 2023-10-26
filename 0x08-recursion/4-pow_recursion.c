#include "main.h"

/**
 * _pow_recursion - Calculate the value of x raised to the power of y
 * @x: base
 * @y: exponent
 * Return: result of x raised to the power of y, or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);  /* Return -1 indicate an error if y is negative*/

	if (y == 0)
		return (1);  /* Base case number raised to the power of 0 is 1*/

	/*Recursively calculate x raised to power of (y-1) and multiply by x*/
	return (x * _pow_recursion(x, y - 1));
}
