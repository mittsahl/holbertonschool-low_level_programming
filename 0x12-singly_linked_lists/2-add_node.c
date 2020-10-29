#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
* add_node - adds a node to linked list
* @head:  head of linked list
* @str: str to be duplicated
* Return: address of new node NULL if failed;
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = _strlen((char *)str);
	newNode->next = *head;
	*head = newNode;
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
