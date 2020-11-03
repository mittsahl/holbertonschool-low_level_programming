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
	unsigned int index = 0, len = (unsigned int)listint_len(*head);

	if (idx > len)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (*head);
	}
	else if (idx == len + 1)
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = newNode;
		return (newNode);
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

/**
* listint_len - returns the length of a linked list
* @h: head of linked list
* Return: length
*/

size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}

