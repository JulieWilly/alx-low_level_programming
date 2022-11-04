#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - function inserts a node at a given position.
 * @head: double pointer
 * @idx: index parameter
 * @n: parameter 2
 * Return: address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int m;
	/* create two new temporal nodes.*/
	listint_t *node1, *new;

	/* check whether the head is null or not */
	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		node1 = *head;
		for (m = 0; m < idx - 1 && node1 != NULL; m++)
		{
			node1 = node1->next;
		}
		if (node1 == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = node1->next;
	node1->next = new;
	return (new);
}
