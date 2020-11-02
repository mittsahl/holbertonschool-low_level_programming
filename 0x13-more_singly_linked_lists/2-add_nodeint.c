#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint - adds a new node at the beginning of a linked list
* @head:  head of linked list
* @n: value to be held in node
* Return: address of new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->next = *head;
	newNode->n = (int)n;
	*head = newNode;
	return (*head);
}

