#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: Pointer to the head of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	/* Declare a temporary pointer to keep track of the current node */
	list_t *current;

	while (head != NULL)  /* Iterate through the list until the end */
	{
		current = head;  /* Set the current node to the head */
		head = head->next;  /* Advance the head to the next node */
		free(current->str);  /* Free the string in the current node */
		free(current);  /* Free the current node */
	}
}
