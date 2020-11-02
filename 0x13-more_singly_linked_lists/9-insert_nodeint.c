#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* insert_nodeint_at_index - inserts a node at a certain index
* @head:  head of linked list
* @idx: index of where the node should be added
* @n: data for new node
* Return: address of new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *before, *newNode;
	unsigned int index = 0;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL && idx == 0)
	{
		*head = newNode;
		return (newNode);
	}
	else if (*head == NULL && idx > 0)
	{
		free(newNode);
		return (NULL);
	}
	else
	{
		tmp = *head;
		while (index < idx)
		{
			tmp = tmp->next;
			index++;
			if (index == idx - 1)
				before = tmp;
		}
		before->next = newNode;
		newNode->next = tmp;
		return (newNode);
	}
}
