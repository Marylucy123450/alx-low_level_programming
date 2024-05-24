#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;/* Declare va_list variable to hold variable arguments */
	unsigned int i;
	char *str;

	va_start(args, n); /* Initialize va_list variable with va_start macro */

	for (i = 0; i < n; i++)
	{
		/* Retrieve the next argument of type char* */
		str = va_arg(args, char *);

		/* If string is NULL, print (nil) */
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str); /* Print the string */

		/* Print the separator if not NULL and not the last string */
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(args); /* Clean up the va_list variable with va_end macro */

	printf("\n");/* Print a new line at the end */
}
