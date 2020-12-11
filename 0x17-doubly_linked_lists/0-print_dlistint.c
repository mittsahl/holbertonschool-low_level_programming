#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * Return: number of nodes in list
 * @h: head of linked list
 */

size_t print_dlistint(const dlistint_t *h)
{;
	int numNodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		numNodes++;
		h = h->next;
	}
	return (numNodes);
}
