#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	/* Traverse the list */
	while (head != NULL)
	{
		/* Store the current node in a temporary pointer */
		temp = head;
		/* Move head to the next node */
		head = head->next;
		/* Free the current node */
		free(temp);
	}
}
