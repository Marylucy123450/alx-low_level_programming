#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a dlistint_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0; /* Initialize count to 0 */

	while (h != NULL)
	{
		h = h->next; /* Move to the next node */
		count++; /* Increment the count */
	}

	return (count); /* Return the number of nodes */
}
