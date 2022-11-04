#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - function that a node at the end of the list.
 * @head: double pointer
 * @n: Integer param
 * Return: address of the newly created node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nodeEnd;
	listint_t *new;

	/* check whether the head is null*/
	if (head == NULL)
		return (NULL);
	/* allocate memory*/
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	/* Assign the new node a value*/
	new->n = n;
	/* Point the next node from the new node to be NULL */
	new->next = NULL;
	/**
	 * check whether there is head and whether the head is null
	 * if there is no head, assign the new node there
	 */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	nodeEnd = *head;
	while (nodeEnd->next != NULL)
	{
		nodeEnd = nodeEnd->next;
	}
	nodeEnd->next = new;
	return (new);
}
