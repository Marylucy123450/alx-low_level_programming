#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int decimal_value = 0;

	/* Check if the string pointer is NULL, if so, return 0*/
	if (!b)
		return (0);

	/* Iterate through each character of the string */
	/*until the null terminator is encountered*/
	for (index = 0; b[index]; index++)
	{
		/* Check if the current character is not */
		/* a valid binary digit ('0' or '1')*/
		if (b[index] < '0' || b[index] > '1')
			return (0);

		/* Convert the binary digit to decimal and*/
		/*update the decimal value*/
		decimal_value = 2 * decimal_value + (b[index] - '0');
	}

	/* Return the converted decimal value*/
	return (decimal_value);
}
