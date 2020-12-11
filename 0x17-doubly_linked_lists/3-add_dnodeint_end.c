#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds node to the end of doubly linked list
 * Return: pointer oto new node else NULL
 * @head: head of linked list
 * @n: data for new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head, *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (current == NULL)
	{
		*head = new;
		return (*head);
	}
	while (current->next != NULL)
		current = current->next;
	current->next = new;
	new->prev = current;
	return (new);
}
