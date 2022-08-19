#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that counts the lenght of a list
 * @h: pameter string
 */

size_t list_len(const list_t *h);
{
	/* initialize a temporal pointer that will navigate through the list*/
	const list_t *nodeNext;
	unsigned int counter = 0;

	/**
	 * Initialize the counter to zero for the recording of the lists elements
	 * Initialize the temporal variable to be the header of the list*/
	nodeNext = h;

	while (nodeNext)
	{ /*start traversing through the list*/
		counter++;
		nodeNext = nodeNext->next;
	}
	return (counter);
}
