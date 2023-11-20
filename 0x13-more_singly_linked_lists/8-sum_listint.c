#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the sum of all the data, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	/* Traverse the list and accumulate the sum of all data values */
	while (current != NULL)
	{
		sum += current->n; /* Add the current node's data to the sum */
		current = current->next; /* Move to the next node */
	}

	return (sum);
}
