#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_listint2 - frees a linked list by setting it NULL
* @head:  head of linked list
* Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp, *tmphead;

	tmphead = *head;
	while (tmphead)
	{
		tmp = tmphead->next;
		free(tmphead);
		tmphead = tmp;
	}
	*head = NULL;
}

