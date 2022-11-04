#include "lists.h"

/**
 * listint_len - function that counts the elements of a listint
 * @h: list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
			num++;
	}
	return (num);
}
