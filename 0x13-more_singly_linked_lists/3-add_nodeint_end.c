#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the pointer to the head of the list
 * @n: value to set in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* Set the value and link of the new node */
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		/* If the list is empty, set the new node as the head */
		*head = new_node;
	}
	else
	{
		temp = *head;

		/* Traverse to the end of the list */
		while (temp->next != NULL)
			temp = temp->next;

		/* Append the new node at the end of the list */
		temp->next = new_node;
	}

	return (new_node);
}
