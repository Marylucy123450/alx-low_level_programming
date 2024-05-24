#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the unsigned long int number.
 * @index: Index of the bit to be set.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the index is out of range */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/* Perform bitwise OR with 1 shifted to the index position */
	*n |= (1ul << index);

	return (1);
}
