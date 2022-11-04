#include "lists.h"

/**
 * sum_listint - function that returns the sum of listint
 * @head: head of the list.
 * Return: returns the sum of the listint.
 */

int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}

