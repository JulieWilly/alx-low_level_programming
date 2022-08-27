#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - function that adds a node a the beggining of a list.
 * @head: double pointer
 * @n: and integer
 * Return: returns the address of the element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	/* Check whether the head is empty*/
	if (head == NULL)
		return (NULL);
	/* Assign the space to the node*/
	ptr = malloc(sizeof(listint_t));
	/*check whether it is null*/
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
