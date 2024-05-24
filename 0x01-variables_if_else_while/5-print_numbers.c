#include <stdio.h>

/**
 * main - This program prints all single-digit numbers of base 10
 *
 * Return: Always 0
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
	}

	putchar('\n');

	return (0);
}
