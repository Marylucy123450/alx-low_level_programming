#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	/* Initialize a variable to count the number of nodes */
	size_t count = 0;

	/* Iterate over the list */
	while (h != NULL)
	{
		/* Check if the string is NULL */
		if (h->str == NULL)
			/* If the string is NULL, print "[0] (nil)" */
			printf("[0] (nil)\n");
		else
			/* If the string is not NULL, print the length and the string value */
			printf("[%u] %s\n", h->len, h->str);

		/* Increment the node count */
		count++;

		/* Move to the next node */
		h = h->next;
	}

	/* Return the number of nodes in the list */
	return (count);
}
