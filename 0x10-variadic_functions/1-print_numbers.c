#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args; /* Declare va_list variable to hold variable arguments */
	unsigned int i;
	int num;

	va_start(args, n);/* Initialize va_list variable with va_start macro */

	for (i = 0; i < n; i++)
	{
		/* Retrieve the next argument of type int */
		num = va_arg(args, int);
		printf("%d", num);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(args); /* Clean up the va_list variable with va_end macro */

	printf("\n");  /* Print a new line at the end */
}
