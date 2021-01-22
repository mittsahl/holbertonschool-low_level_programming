#include "hash_tables.h"

/**
 * hash_table_get - returns the buckets of the hashtable
 * @ht: pointer to the hashtable
 * @key: the key we are looking for
 *
 * Return: the value if successful, NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *entry;
	unsigned long int bucket;

	if (key == NULL || ht == NULL || !(*key))
		return (NULL);

	bucket = key_index((const unsigned char *) key, ht->size);
	entry = ht->array[bucket];

	while (entry != NULL)
	{
		if (!strcmp(key, entry->key))
			return (entry->value);
		entry = entry->next;
	}
	return (NULL);
}
