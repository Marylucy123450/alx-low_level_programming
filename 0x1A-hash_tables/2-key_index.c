
#include "hash_tables.h"

/**
 * key_index - Returns the index at which the key/value pair should be stored
 *             in the array of the hash table.
 *
 * @key: The key to be hashed and whose index needs to be found.
 * @size: The size of the array of the hash table.
 *
 * Return: The index at which the key should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_code;

	if (key == NULL || size == 0)
		return (0);

	hash_code = hash_djb2(key);
	return (hash_code % size);
}
