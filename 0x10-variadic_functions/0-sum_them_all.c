#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sums all the parameters.
 * @n: The number of parameters.
 *
 * Return: The sum of all the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;  /* Declare va_list variable to hold variable arguments */
	int sum = 0;    /* Initialize the sum variable to 0 */
	unsigned int i;
	int num;

	if (n == 0)
		return (0);

	va_start(args, n); /* Initialize va_list variable with va_start macro */

	/* Iterate n times to retrieve each argument and calculate the sum */
	for (i = 0; i < n; i++)
	{
		/* Retrieve the next argument of type int */
		num = va_arg(args, int);
		sum += num;/* Add the argument to the sum */
	}

	va_end(args);  /* Clean up the va_list variable with va_end macro */

	return (sum);   /* Return the computed sum */
}
