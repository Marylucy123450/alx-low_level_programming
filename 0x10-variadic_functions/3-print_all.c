#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything based on the format specifier.
 * @format: A list of types of arguments passed to the function.
 */

void print_all(const char * const format, ...)
{
	int i = 0; /* Initialize counter variable */
	char *str; /* Declare string variables and*/
	char *sep = ""; /* initialize separator */
	va_list list; /* Declare va_list variable to hold variable arguments */

	/* Initialize va_list variable with va_start macro */
	va_start(list, format);
	if (format) /* Check if format is not NULL */
	{
		while (format[i]) /* Iterate through the format string */
		{
			/* Check the current character in format */
			switch (format[i])
			{
			case 'c':/* Print a character */
				printf("%s%c", sep, va_arg(list, int));
				break;
			case 'i':/* Print an integer */
				printf("%s%d", sep, va_arg(list, int));
				break;
			case 'f':/* Print a float */
				printf("%s%f", sep, va_arg(list, double));
				break;
			case 's':
				/* Retrieve the next argument of type char* */
				str = va_arg(list, char *);
				if (!str)/* If string is NULL, set it to (nil)*/
					str = "(nil)";
				printf("%s%s", sep, str); /* Print the string */
				break;
			default:
				i++; /* Ignore any other character */
				continue;
			}
			sep = ", "; /* Update the separator to separate values */
			i++;
		}
	}
	printf("\n"); /* Print a new line at the end */
	va_end(list);/* Clean up the va_list variable with va_end macro */
}
