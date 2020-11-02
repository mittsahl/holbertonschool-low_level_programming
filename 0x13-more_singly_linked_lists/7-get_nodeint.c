#include <stdio.h>
#include "lists.h"

/**
* get_nodeint_at_index - returns nth index of a linked list
* @head: head of linked list
* @index:  idnex of node to be found
* Return: node else NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int idx = 0;
	listint_t *tmp = head;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	while (idx < index && tmp != NULL)
	{
		idx++;
		tmp = tmp->next;
	}
	return (tmp);
}

