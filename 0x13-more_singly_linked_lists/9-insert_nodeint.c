#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data for the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current = *head;
	unsigned int i;

	/* Create a new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	/* Special case: inserting at the beginning of the list */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* Traverse the list to find the node before the insertion point */
	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
		{
			free(new_node); /* Failed to find the insertion point */
			return (NULL);
		}
		current = current->next;
	}

	/* Insert the new node after the current node */
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
