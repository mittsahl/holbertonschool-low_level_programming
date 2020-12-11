#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node in linked list
 * Return: node at index n else NULL
 * @head: head of linked list
 * @index: index  of node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int len = (unsigned int)dlistint_len(head), idx = 0;
	dlistint_t *current = head;

	if (len < index)
		return (NULL);
	while (idx < index)
	{
		current = current->next;
		idx++;
	}
	return (current);
}

/**
 * dlistint_len - counts the number of nodes in a linked list
 * Return: number of nodes
 * @h: head of linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t numNodes = 0;

	while (h != NULL)
	{
		numNodes++;
		h = h->next;
	}
	return (numNodes);
}

