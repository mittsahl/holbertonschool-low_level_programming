#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - inserts a node at any index in doubly linked list
 * @h: head of linked list
 * @idx: index of new node to be inserted
 * @n: data for new node
 * Return: new node or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current, *prev = NULL;
	unsigned int length = (unsigned int)dlistint_len(*h);

	if (idx > length)
	{
		printf("First");
		return (NULL);
	}
	if (idx == 0)
	{
		add_dnodeint(h, n);
		return (*h);
	}
	if (idx == length)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	length = 0;
	current = *h;
	while (length < idx)
	{
		prev = current;
		current = current->next;
		length++;
	}
	prev->next = new;
	new->next = current;
	new->prev = prev;
	current->prev = new;
	return (new);

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

