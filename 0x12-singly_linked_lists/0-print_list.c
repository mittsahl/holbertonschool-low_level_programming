#include "lists.h"

/**
* print_list - prints a linked list
* @h: head of linked list
* Return: number of nodes in linked list
*/

size_t print_list(const list_t *h)
{
	size_t numOfNodes = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		numOfNodes++;
		h = h->next;
	}
	return (numOfNodes);
}

