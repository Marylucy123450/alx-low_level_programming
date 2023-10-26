#include "main.h"

/**
 * _puts_recursion - Recursive function to print a string followed
 * by a new line
 * @s: input
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		/* Print new line character if end of string is reached */
		_putchar('\n');
		return;
	}

	_putchar(*s);  /* Print current character */
	/* Recursively call the function with the next character */
	_puts_recursion(s + 1);
}
