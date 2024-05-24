#include <stdio.h>

/**
 * main - single digit numbers of base 10 starting from 0, followed new line
 *
 * Return: Always 0
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar(digit + '0');
	}

	putchar('\n');

	return (0);
}
