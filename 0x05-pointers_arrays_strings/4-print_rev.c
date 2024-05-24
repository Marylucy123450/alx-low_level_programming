#include "main.h"
#include <string.h>

/**
 * print_rev - a function that prints a string in reverse
 * followed by a new line
 * @s: pointer to the string
 * Return: void
 */
void print_rev(char *s)
{
	int length = strlen(s);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}
