#include "lists.h"

/**
 * free_listint - function that frees a listint_t
 * @head: head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		/* assig the moving node to the head */
		next = head->next;
		free(head);
		/* assign the next unfreed node to head to be freed int the next phase */
		head = next;
	}
}
