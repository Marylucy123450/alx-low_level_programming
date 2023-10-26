#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - Calculate the natural square root of a number
 * @n: input number
 * Return: natural square root of n, or
 * -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the square root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
	/* If the square of i is greater than n, return -1 */
	if (i * i > n)
		return (-1);
	/* If the square of i is equal to n, return i */
	if (i * i == n)
		return (i);
	/* Recursively call the function with the next iterator value */
	return (actual_sqrt_recursion(n, i + 1));
}
