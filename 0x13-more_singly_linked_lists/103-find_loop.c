#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The address of the node where the loop starts,
 *         or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	/* Declare two pointers: slow and fast */
	listint_t *slow, *fast;

	/* Check if the list is empty or has only one node */
	if (head == NULL || head->next == NULL)
		return (NULL);

	/* Initialize the pointers */
	slow = head->next;
	fast = (head->next)->next;

	/* Traverse the list */
	while (fast && fast->next)
	{
		/* Move the slow pointer one step forward */
		slow = slow->next;

		/* Move the fast pointer two steps forward */
		fast = (fast->next)->next;

		/* Check if the pointers meet, indicating a loop */
		if (slow == fast)
		{
			/* Reset the slow pointer to the head of the list */
			slow = head;

			/* Move both pointers one step a time till meet again */
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}

			/* Return the address of the node where loop starts */
			return (slow);
		}
	}

	/* If no loop is found, return NULL */
	return (NULL);
}
