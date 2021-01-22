#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hashtable
 * @ht: pointer to the hashtable
 *
 * Return: Always nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		free_all(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
/**
 * free_all - function frees and deletes a node in a hastable
 * @bucket: bucket we are deleting
 *
 * Return: Always nothing
 */
void free_all(hash_node_t *bucket)
{
	if (bucket == NULL)
		return;
	free(bucket->key);
	free(bucket->value);
	free_all(bucket->next);
	free(bucket);
}
