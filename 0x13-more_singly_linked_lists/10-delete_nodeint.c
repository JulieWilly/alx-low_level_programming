#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function that deletes a node a given index
 * @head: double pointer
 * @index: param
 * Return: on success return 1 else return -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node1, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	node1 = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (node1->next == NULL)
			return (-1);
		node1 = node1->next;
	}
	next = node1->next;
	node1->next = next->next;
	free(next);
	return (1);
}

