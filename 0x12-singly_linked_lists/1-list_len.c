#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list
 * @h: Pointer to the list_t list
 *
 * Return: The number of elements in the list
 */
size_t list_len(const list_t *h)
{
	/* Initialize a counter to keep track of the number of elements */
	size_t count = 0;

	/* Iterate through the linked list until reaching the end (NULL) */
	while (h)
	{
		count++; /* Increment the counter for each node */
		h = h->next; /* Move to the next node */
	}

	return (count); /* Return the total count of elements in the list */
}
