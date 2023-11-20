#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node's data (n)
 * @head: pointer to a pointer to the head of the list
 *
 * Return: the head node's data (n), or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	/* Check if the list is empty */
	if (*head == NULL)
		return (0);

	/* Store the head node's data */
	data = (*head)->n;

	/* Store the head node in a temporary pointer */
	temp = *head;

	/* Move the head to the next node */
	*head = (*head)->next;

	/* Free the previous head node */
	free(temp);

	/* Return the head node's data */
	return (data);
}
