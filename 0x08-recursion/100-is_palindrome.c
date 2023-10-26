#include <stdio.h>
#include <string.h>

/**
 * is_palindrome_recursive - recursive helper function to
 * check if a string is a palindrome
 * @s: input string
 * @start: starting index
 * @end: ending index
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	/* Base case: */
	/* an empty string or a string with asingle character is a palindrome */
	if (start >= end)
		return (1);

	/* Check if the characters at the start and end indices match */
	if (s[start] != s[end])
		return (0);

	/* Recursively check the remaining substring */
	/* without the start and end characters */
	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: input string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	/* Base case: */
	/*an empty string or a string with a single character is a palindrome */
	if (length == 0 || length == 1)
		return (1);

	/* Call the recursive helper function */
	/*to check if the string is a palindrome */
	return (is_palindrome_recursive(s, 0, length - 1));
}
