#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with malloc
 * @old_size: size of the allocated space for ptr
 * @new_size: new size of the memory block
 *
 * Return: pointer to the reallocated memory block, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	/* If ptr is NULL, equivalent to malloc(new_size) */
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	/* If new_size is zero, equivalent to free(ptr) */
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	/* If new_size is equal to old_size, do nothing and return ptr */
	if (new_size == old_size)
		return (ptr);

	/* Allocate memory for the new block */
	new_ptr = malloc(new_size);

	/* Check if malloc failed (returned NULL) */
	if (new_ptr == NULL)
		return (NULL);

	/* Copy contents from the old block to the new block */
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			((char *)new_ptr)[i] = ((char *)ptr)[i];
	}
	else
	{
		for (i = 0; i < new_size; i++)
			((char *)new_ptr)[i] = ((char *)ptr)[i];
	}
	free(ptr); /* Free the old block */
	/* Return the pointer to the reallocated memory block */
	return (new_ptr);
}
