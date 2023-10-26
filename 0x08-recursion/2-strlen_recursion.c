#include "main.h"

/**
 * _strlen_recursion - Recursive function to compute the length of a string
 * @s: input string
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int length;

	if (*s == '\0')
		return (0);

	/*Recursively call the function with the next character*/
	length = _strlen_recursion(s + 1);
	/*Increment the length by 1 for the current character*/
	return (length + 1);
}
