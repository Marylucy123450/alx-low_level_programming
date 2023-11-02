#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: pointer to the allocated memory
 *         terminates the process with status value 98 on failure
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	/* Allocate memory using malloc */
	ptr = malloc(b);

	/* Check if malloc failed (returned NULL) */
	if (ptr == NULL)
	{
		exit(98);/* Terminate the process with status value 98 */
	}

	/* Return the allocated pointer */
	return (ptr);
}
