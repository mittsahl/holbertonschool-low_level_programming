#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints a linked list and returns length
 * @h: head of linked
 * Return: length of linked list
 */

size_t print_listint(const listint_t *h)
{
	size_t length = 0;

	while (h)
	{
		printf("%d\n", h->n);
		length++;
		h = h->next;
	}
	return (length);
}
