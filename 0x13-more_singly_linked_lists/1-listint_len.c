#include <stdio.h>
#include "lists.h"

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

