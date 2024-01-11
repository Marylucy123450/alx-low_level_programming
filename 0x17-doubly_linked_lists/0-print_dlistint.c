#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0; /* Initialize count to 0 */

	while (h != NULL)
	{
		printf("%d\n", h->n); /* Print the data in the current node */
		h = h->next; /* Move to the next node */
		count++; /* Increment the count */
	}

	return (count); /* Return the number of nodes */
}
