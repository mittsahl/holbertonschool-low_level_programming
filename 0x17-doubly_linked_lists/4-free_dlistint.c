#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - iterates down a linked list and frees each node
 * Return: void
 * @head: head of linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
