#include "lists.h"

/**
 * get_nodeint_at_index - function that gets the nth node of listint_t
 * @head: head of the list.
 * @index: node index
 * Return: returns the nth index of the listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num;

	if (head ==  NULL)
		return (NULL);
	for (num = 0; num < index; num++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
