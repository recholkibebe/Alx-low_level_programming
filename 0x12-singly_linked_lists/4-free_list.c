#include "lists.h"

/**
 *free_list - Frees  list
 *@head: A pointer to  list head
 *
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}

