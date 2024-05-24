#include "main.h"
/**
 * leet - Encodes a string into 1337
 * @n: The input string to be encoded.
 * Return: the encoded string.
 */

char *leet(char *n)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	/* Iterate through each character in the input string */
	for (i = 0; n[i] != '\0'; i++)
	{
		/* Iterate through the mapping arrays s1 and s2 */
		for (j = 0; j < 10; j++)
		{
			/* If the current character matches a character in s1 */
			if (n[i] == s1[j])
			{
				/* Replace the character with the corresponding character in s2 */
				n[i] = s2[j];
			}
		}
	}
	return (n);
}
