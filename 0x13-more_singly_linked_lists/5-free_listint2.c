#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to a pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	/* Check if the double pointer and the list are not NULL */
	if (head == NULL || *head == NULL)
		return;

	/* Traverse the list */
	while (*head != NULL)
	{
		/* Store the current node in a temporary pointer */
		temp = *head;
		/* Move head to the next node */
		*head = (*head)->next;
		/* Free the current node */
		free(temp);
	}

	/* Set the head to NULL */
	*head = NULL;
}
