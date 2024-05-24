#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to extract the bit from.
 * @index: Index of the bit to get.
 *
 * Return: The value of the bit at index index or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	/* Check if the index is out of range */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/* Shift the number 'n' right by 'index' positions*/
	/* and perform a bitwise AND with 1*/
	/* This isolates the bit at the specified index*/
	bit = (n >> index) & 1;

	/* Return the value of the bit*/
	return (bit);
}
