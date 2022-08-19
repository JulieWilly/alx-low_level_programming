#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees a list
 * @head: list that is to be freed
 */
void free_list(list_t *head)
{
	list_t *empty;

	while (head)
	{
		empty = head->next;
		free(head->str);
		free(head);
		head = empty;
	}
}
