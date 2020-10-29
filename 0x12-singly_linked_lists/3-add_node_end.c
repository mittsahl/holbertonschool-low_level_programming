#include <string.h>
#include "lists.h"

/**
* add_node_end - adds a node to the end of a linked list
* @head: head of linked list
* @str: string to be copied to linked list
* Return: address of new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *last = *head;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = _strlen((char *)str);
	newNode->next = NULL;
	if (!*head)
	{
		*head = newNode;
		return (*head);
	}
	while (last->next)
	{
		last = last->next;
	}
	last->next = newNode;
	return (*head);
}

/**
 * _strlen - returns the length of string s
 * Return: length
 * @s: string passed from main
 */

int _strlen(char *s)
{
	int length;
	char *start = s;

	for (length = 0; start[length] != '\0'; length++)
		;
	return (length);
}
