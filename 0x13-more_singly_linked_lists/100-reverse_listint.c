#include <stdlib.h>
#include "lists.h"

/**
* reverse_listint -  reverses a linked list
* @head: head of linked list
* Return: pointer to first node of linked list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *tmp;

	tmp = NULL;
	next = *head;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = tmp;
		tmp = (*head);
		(*head) = next;
	}
	*head = tmp;
	return (*head);
}


