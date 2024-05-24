#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: First number.
 * @m: Second number.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m; /* Calculate the XOR of n and m */
	unsigned int count = 0; /* Counter keep track number of bits to flip */

	while (xor_result != 0)
	{
		if (xor_result & 1)
			/* Increment count if least significant bit is set */
			count++;

		/* Right-shift xor_result by 1 to consider the next bit */
		xor_result = xor_result >> 1;
	}

	/* Return the count representing the number of bits to flip */
	return (count);
}
