#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 * @str: pointer to the string
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
		if (str[i] == '\0')
			break;
		i++;
	}

	putchar('\n');
}
