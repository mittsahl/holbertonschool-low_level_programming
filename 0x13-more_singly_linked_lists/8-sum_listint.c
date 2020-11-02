#include <stdio.h>
#include "lists.h"

/**
* sum_listint - sum of all data in a linked list
* @head:  head of linked list
* Return: sum
*/

int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}

