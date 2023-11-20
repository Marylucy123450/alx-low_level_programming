#include "lists.h"

/**
 * listint_len - returns the number of elements in a listint_t list
 * @h: pointer to the listint_t list
 *
 * Return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	/* Iterate through the linked list until NULL is reached */
	while (h)
	{
		count++;      /* Increment the count */
		h = h->next;  /* Move to the next node */
	}

	return (count);
}
