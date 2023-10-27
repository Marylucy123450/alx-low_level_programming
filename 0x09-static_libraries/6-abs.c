#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the character to check
 *
 * Return: Returns -n if n<0, n otherwise
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
