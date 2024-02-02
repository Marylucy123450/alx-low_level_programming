#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created hash table, or NULL if an error
 *         occurs.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/* Declare a pointer to a hash_table_t structure */
	hash_table_t *new_table;

	/* Declare a variable for loop iteration */
	unsigned long int i;

	/* Check if the specified size is 0, return NULL in that case */
	if (size == 0)
		return (NULL);

	/* Allocate memory for the hash table structure */
	new_table = malloc(sizeof(hash_table_t));

	/* Check if memory allocation was successful */
	if (new_table == NULL)
		return (NULL);

	/* Allocate memory for the array of hash_node_t pointers */
	new_table->array = malloc(sizeof(hash_node_t *) * size);

	/* Check if memory allocation was successful */
	if (new_table->array == NULL)
	{
		/* Free the previously allocated memory for the hash table structure */
		free(new_table);
		return (NULL);
	}

	/* Initialize each element of the array to NULL */
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	/* Set the size of the hash table */
	new_table->size = size;

	/* Return a pointer to the newly created hash table */
	return (new_table);
}
