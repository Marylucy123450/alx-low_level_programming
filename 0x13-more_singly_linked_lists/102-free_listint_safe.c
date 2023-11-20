#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: A pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	/* Check if the list or head pointer is NULL */
	if (h == NULL || *h == NULL)
		return (0);

	/* Traverse the list */
	while (*h)
	{
		diff = *h - (*h)->next;

		/* Check if a loop is encountered */
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			/* Free the current node and break the loop */
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL; /* Set the head pointer to NULL */

	return (len);
}
