#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Pointer to a pointer to the head of the list
 * @str: String to be duplicated and added to the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node; /* Create a new node */

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t)); /* Allocate memory for the new node*/
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
	/* Set the next pointer to the current head node */
	new_node->next = *head;

	*head = new_node; /* Update the head to point to the new node */

	return (new_node); /* Return the address of the new element */
}
