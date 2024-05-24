#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Pointer to a pointer to the head of the list
 * @str: String to be duplicated and added to the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node; /* Create a new node */
	list_t *current; /* Create a traversal pointer */

	if (str == NULL)
		return (NULL);

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Duplicate the string and assign it to the new node */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Set the length of the string */
	new_node->len = strlen(new_node->str);
	/* Set the next pointer of the new node to NULL */
	new_node->next = NULL;

	/* If the list is empty, make the new node the head */
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current = *head; /* Traverse to the last node */
		while (current->next != NULL)
			current = current->next;

		/* Set the next pointer of the last node to the new node */
		current->next = new_node;
	}

	return (new_node); /* Return the address of the new element */
}
