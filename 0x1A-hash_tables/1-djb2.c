#include "hash_tables.h"

/**
 * hash_djb2 - Implementation of the djb2 hash algorithm.
 *
 * This function takes a string as input and generates a hash code
 * using the djb2 algorithm. The hash code is an unsigned long integer.
 *
 * @str: The input string for which the hash code is generated.
 *
 * Return: The hash code generated for the input string.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
