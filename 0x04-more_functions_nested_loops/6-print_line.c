#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 *
 * @n: number of times the character _ should be printed
 *
 * Return: No return
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
