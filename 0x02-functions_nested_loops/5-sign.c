#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the character to check
 *
 * Return: Returns 1 n>0, 0 if n=0, -1 if n<0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar((char)'+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar((char)'0');
		return (0);
	}
	else
	{
		_putchar((char)'-');
		return (-1);
	}
}
