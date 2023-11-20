#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given position
 * @head: double pointer to the head of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (*head == NULL) /* Empty list */
		return (-1);

	current = *head;

	if (index == 0) /* Delete the first node */
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	/* Find the node before the node to be deleted */
	for (i = 0; i < index - 1; i++)
	{
		if (current->next == NULL) /* Index is out of range */
			return (-1);
		current = current->next;
	}

	temp = current->next; /* Node to be deleted */
	if (temp == NULL) /* Index is out of range */
		return (-1);

	current->next = temp->next;
	free(temp);

	return (1);
}
