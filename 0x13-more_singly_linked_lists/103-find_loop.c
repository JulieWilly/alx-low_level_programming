#include "lists.h"

/**
 * find_listint_loop - function that finds a loop in a listint linked list
 * @head: pointer to the first node of the list
 * Return: address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *snail, *antelope;

	snail = antelope = head;
	while (snail && antelope && antelope->next)
	{
		snail = snail->next;
		antelope = antelope->next->next;
		if (snail == antelope)
		{
			snail = head;
			break;
		}
	}
	if (!snail || !antelope || !antelope->next)
		return (NULL);
	while (snail != antelope)
	{
		snail = snail->next;
		antelope = antelope->next;
	}
	return (antelope);
}
