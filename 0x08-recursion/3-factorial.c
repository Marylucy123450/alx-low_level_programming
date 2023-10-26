#include "main.h"

/**
 * factorial - Calculate the factorial of a given number
 * @n: input number
 * Return: factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);  /* Return -1 to indicate an error if n is negative*/

	if (n == 0)
		return (1);  /*Base case: factorial of 0 is 1*/

	/*Recursively calculate factorial multiply n with factorial of (n-1)*/
	return (n * factorial(n - 1));
}
