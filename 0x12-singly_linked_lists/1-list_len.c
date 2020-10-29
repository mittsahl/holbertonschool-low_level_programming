#include <stdio.h>
#include "lists.h"

/**
* list_len - finds the length of linked list
* @h: head of linked list
* Return: number of nodes
*/

size_t list_len(const list_t *h)
{
	size_t numOfNodes = 0;

	while (h)
	{
		numOfNodes++;
		h = h->next;
	}
	return (numOfNodes);
}

