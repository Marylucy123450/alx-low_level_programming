#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 algorithm.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	int i = 0;
	int j;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	/* Iterate through each character of the string */
	while (str[i] != '\0')
	{
		j = 0;
		/* Check if the character is an alphabet letter */
		while (alphabet[j] != '\0')
		{
			if (str[i] == alphabet[j])
			{
				/* Replace the character with its ROT13 equivalent */
				str[i] = rot13[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (str);
}
