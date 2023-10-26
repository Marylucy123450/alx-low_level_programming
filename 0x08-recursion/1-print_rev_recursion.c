#include "main.h"

/**
 * _print_rev_recursion - Recursive function to print a string in reverse
 * @s: input string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	/* Recursively call the function with the next character */
	_print_rev_recursion(s + 1);
	/* Print the current character after the recursive call */
	_putchar(*s);
}
