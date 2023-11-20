#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node, starting at 0
 *
 * Return: the nth node of the list, or NULL if the node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	/* Traverse the list until the desired index or the end is reached */
	while (current != NULL)
	{
		if (count == index) /* Found the desired index */
			return (current);

		current = current->next; /* Move to the next node */
		count++; /* Increment the count */
	}

	/* The node doesn't exist, return NULL */
	return (NULL);
}
