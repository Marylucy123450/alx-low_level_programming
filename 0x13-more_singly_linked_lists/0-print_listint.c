#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the listint_t list to print
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)/* Iterate through the linked list until NULL is reached*/
	{
		printf("%d\n", h->n);/* Print the value of the current node */
		count++;/* Increment the count of nodes */
		h = h->next;/* Move to the next node */
	}
	return (count);/* Return the number of nodes */
}
