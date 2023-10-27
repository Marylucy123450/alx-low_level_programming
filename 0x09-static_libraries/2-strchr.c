#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to be located.
 *
 * Return: A pointer to the first occurrence of the character @c in
 * the string @s,
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)  /* Found the character */
			return (s);

		s++;  /* Move to the next character */
	}

	if (*s == c)  /* Check if the character is the null terminator */
		return (s);

	return (NULL);  /* Character not found */
}
