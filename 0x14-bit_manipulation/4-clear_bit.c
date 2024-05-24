#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the unsigned long int number.
 * @index: Index of the bit to be cleared.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the index is out of range */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/* Perform bitwise AND with complement of 1 shifted to index position*/
	*n &= ~(1ul << index);

	return (1);
}
