#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given index of a list.
 * @head: A pointer to the pointer to the head of the list.
 * @index: The index of the node to delete, starting from 0.
 * Return: 1 on success, -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    unsigned int count;
    dlistint_t *tmp;

    if (*head == NULL || head == NULL)
        return (-1);

    if (index == 0)
    {
        /* If the node at index 0 needs to be deleted */
        tmp = *head;
        *head = (*head)->next;
        if (*head)
            (*head)->prev = NULL;
        free(tmp), tmp = NULL;
        return (1);
    }

    count = 1;
    tmp = (*head)->next;
    if (tmp)
    {
        while (tmp->next)
        {
            if (index == count)
            {
                /* Update pointers to remove the node at the given index */
                tmp->prev->next = tmp->next;
                tmp->next->prev = tmp->prev;
                free(tmp), tmp = NULL;
                return (1);
            }
            count++, tmp = tmp->next;
        }
    }

    if (tmp && index == count)
    {
        /* If the last node needs to be deleted */
        tmp->prev->next = NULL;
        free(tmp);
        return (1);
    }

    return (-1); /* Return -1 if the deletion is not successful */
}
