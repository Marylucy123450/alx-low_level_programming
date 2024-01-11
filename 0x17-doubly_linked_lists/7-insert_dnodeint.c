#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at
 * a given position.
 *
 * @h: A pointer to a pointer to the head of the list.
 * @idx: The index where the new_node node should be inserted.
 * @n: The value of the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *head;
	unsigned int i;

	new_node = NULL;
	if (idx == 0)
    {
		/* If the index is 0, use add_dnodeint function to add at the beginning */
		new_node = add_dnodeint(h, n);
	}
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
		{
			/* Move head to the beginning of the list */
			while (head->prev != NULL)
				head = head->prev;
		}
		while (head != NULL)
		{
			if (i == idx)
			{
				/* If the index is found */
				if (head->next == NULL)
				{
					/* If at the end, use add_dnodeint_end to add a new_node node */
					new_node = add_dnodeint_end(h, n);
				}
				else
				{
					/* Otherwise, insert a new_node node at the specified index */
					new_node = malloc(sizeof(dlistint_t));
					if (new_node != NULL)
					{
						new_node->n = n;
						new_node->next = head->next;
						new_node->prev = head;
						head->next->prev = new_node;
						head->next = new_node;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}

	return (new_node);
}
