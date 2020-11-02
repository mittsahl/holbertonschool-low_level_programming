#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - gets rid of first node and returns data
* @head: head of linked list
* Return: data of deleted node
*/

int pop_listint(listint_t **head)
{
	listint_t *newHead;
	int saved;

	newHead = (*head)->next;
	saved = (*head)->n;
	free(*head);
	*head = newHead;

	return (saved);
}

