#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int flag;

	/* Calculate the mask with a 1 in the most significant bit position*/
	mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);

	/* Flag to track if significant bits have been encountered*/
	flag = 0;

	/* Check if n is 0, if so, print '0' and return*/
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	/* Iterate through each bit of the number using the mask*/
	while (mask != 0)
	{
		/* Check if the current bit is 1 by performing */
		/*a bitwise AND with the mask*/
		if ((n & mask) != 0)
		{
			/* If the bit is 1, print '1' and set the flag*/
			/*to indicate significant bits*/
			_putchar('1');
			flag = 1;
		}
		/* If the bit is 0 and significant bits have been encountered*/
		/*, print '0'*/
		else if (flag)
		{
			_putchar('0');
		}

		/* Shift the mask one position to the right*/
		mask = mask >> 1;
	}
}
