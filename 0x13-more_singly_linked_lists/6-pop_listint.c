#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: double pointer of a list.
 * Return: 0
 zr
 */

int pop_listint(listint_t **head)
{
	listint_t *node1;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	node1 = *head;
	*head = node1->next;
	n = node1->n;
	free(node1);
	return (n);
}

		
