#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that add a new node at the beggining of a linked list
 * @head: double pointer to the list_t of the list
 * @str: the string to add and duplicate
 * Return: the memory address of the string
 */

list_t *add_node(list_t **head, const char *str)
{
	list *newNode;
	unsigned int len = 0;

	/* check the legth of the string*/
	while (str[len])
		len++;
	/* alloccate memoty to the new node created*/
	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = (*head);
	(*head) = newNode;

	return (newNode);
}
