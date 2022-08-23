#include "lists.h"
#include <stdio.h>
/**
 * print_listint - function that prints the elements of a list.
 * @h: list.
 * Return: number of nodes signalled.
 */
size_t print_listint(const listint_t *h)
{
	size_t m = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		m++;
	}
	return (0);
}


