#include <stdio.h>

/**
 * main - This program prints alphabet in lowercase &  uppercase with putchar
 *
 * Return: Always 0
 */

int main(void)
{
	char lowercase;
	char uppercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}

	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		putchar(uppercase);
	}

	putchar('\n');

	return (0);
}
