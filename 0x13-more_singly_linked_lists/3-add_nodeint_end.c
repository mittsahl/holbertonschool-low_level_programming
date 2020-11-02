#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint_end - adds a node to the end of a linked list 
* @head:  head of linked list
* @n: int value to be held  
* Return: address of new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *current = *head;
	
	if (newNode == NULL)
		return (NULL);
	newNode->next = NULL;
	newNode->n = (int)n;
	
	if (!*head)
	{
		*head = newNode;
		return (*head);
	}
	while (current->next)
		current = current->next;
	current->next = newNode;
	return (current);
}

