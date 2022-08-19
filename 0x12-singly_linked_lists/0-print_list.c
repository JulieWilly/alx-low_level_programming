#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the elements of a sigly linked list.
 * @h: is the pointer to the list_t list will point.
 * 
 * Return: Number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		n++;
	}
	return(n);
}

