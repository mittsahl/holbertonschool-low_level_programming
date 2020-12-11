#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds node to the start of a doubly linked list
 * Return: address of new node else NULL
 * @head: head of linked list
 * @n: data for new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *h = *head;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (h == NULL)
		*head = new;
	else
	{
		new->next = h;
		h->prev = new;
		h = new;
		*head = h;
	}
	return (*head);
}

