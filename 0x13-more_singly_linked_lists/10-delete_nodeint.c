#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* delete_nodeint_at_index - deletes node at index
* @head:  head of linked list
* @index:  index of node to be removed
* Return: 1 on success -1 on failure
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	listint_t *current, *before, *after;

	if (!*head)
		return (-1);
	current = *head;
	if ((*head)->next == NULL)
	{
		free(current);
		*head = NULL;
		return (1);
	}
	if (index == 0)
	{
		if (current->next)
			*head = current->next;
		free(current);
		return (1);
	}
	else
	{
		while (idx < index && current->next)
		{
			idx++;
			current = current->next;
			if (idx == index - 1)
			{
				before = current;
			}
		}
		after = current->next;
		before->next = after;
		free(current);
		return (1);
	}
}
