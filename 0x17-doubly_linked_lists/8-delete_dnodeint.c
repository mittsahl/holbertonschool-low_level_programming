#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index of doubly linked list
 * Return: 1 on completion -1 on failure
 * @head: head of linked list
 * @index: index of of node to be deleted
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int length = (unsigned int)dlistint_len(*head);
	dlistint_t *current, *prev = NULL;

	if (index > length || *head == NULL)
		return (-1);
	length = 0;
	current = *head;
	if (index == 0)
	{
		(*head) = (*head)->next;
		free(current);
		return (1);
	}
	while (length < index)
	{
		prev = current;
		current = current->next;
		length++;
	}
	prev->next = current->next;
	current->next->prev = prev;
	free(current);
	return (1);
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

