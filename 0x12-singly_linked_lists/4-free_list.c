#include <stdio.h>
#include "lists.h"

/**
* free_list - frees a linked list
* @head: head of linked list
* Return: void
*/

void free_list(list_t *head)
{
	list_t *tmp = head->next;

	while (tmp)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}

