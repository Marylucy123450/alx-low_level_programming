#ifndef LISTS_H
#define LISTS_H

/* header files */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* structures */
/**
 * struct list_s - Node of a singly linked list
 * @str: String stored in the node (malloc'ed string)
 * @len: Length of the string
 * @next: Pointer to the next node
 *
 * Description: This structure represents a node in a singly linked list.
 */
typedef struct list_s
{
	char *str;                   /* String - (malloc'ed string) */
	unsigned int len;            /* Length of the string */
	struct list_s *next;         /* Points to the next node */
} list_t;

/* function prototypes*/
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* LISTS_H */
