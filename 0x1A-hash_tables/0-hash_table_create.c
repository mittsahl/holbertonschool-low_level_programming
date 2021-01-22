#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table initialized to NULL
 * Return: NULL on failure else mallocd hash table
 * @size: size of the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (new == NULL)
		return (NULL);
	new->array = malloc(sizeof(hash_table_t *) * size);
	if (new->array == NULL)
		return (NULL);
	new->size = size;
	if (size == 0)
		return (NULL);
	for (; i < size; i++)
		new->array[i] = NULL;
	return (new);
}
