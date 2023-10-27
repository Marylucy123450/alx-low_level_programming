#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;        /* Initialize loop variable */
	d = 0;        /* Counter for number of '-' signs encountered */
	n = 0;        /* Resulting integer */
	len = 0;      /* Length of the string */
	f = 0;        /* Flag to indicate if a digit has been found */
	digit = 0;    /* Stores the digit value */

	while (s[len] != '\0')   /* Find the length of the string */
		len++;
	/* Loop through the string until a digit is found */
	while (i < len && f == 0)
	{
		if (s[i] == '-')/* Count the number of '-' signs */
			++d;
		/* Check if a digit is encountered */
		if (s[i] >= '0' && s[i] <= '9')
		{
			/* Convert character to its corresponding digit value */
			digit = s[i] - '0';
			/* If number of '-' signs is odd, make digit negative */
			if (d % 2)
				digit = -digit;
			 /* Append the digit to the resulting integer */
			n = n * 10 + digit;
			/* Set the flag to indicate a digit has been found */
			f = 1;
			/* Check if the next character is not a digit */
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;   /* If so, break the loop */
			/* Reset flag to continue searching for more digits */
			f = 0;
		}
		i++;   /* Move to the next character in the string */
	}
	if (f == 0)   /* If no digit is found, return 0 */
		return (0);
	return (n);   /* Return the resulting integer */
}
