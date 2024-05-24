#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line
 *
 * Return: No return
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');
}
