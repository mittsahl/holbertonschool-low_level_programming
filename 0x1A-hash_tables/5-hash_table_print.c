#include "hash_tables.h"

/**
 * hash_table_print - prints the hashtable
 * @ht: the pointer to the hashtable
 *
 * Return: Always nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *entry;
	unsigned long int i, status = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		entry = ht->array[i];
		while (entry)
		{
			if (status > 0)
				printf(", ");
			printf("'%s': '%s'", entry->key, entry->value);
			status = 1;
			entry = entry->next;
		}
	}
	printf("}\n");
}
