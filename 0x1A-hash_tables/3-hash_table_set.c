#include "hash_tables.h"

/**
 * hash_table_set - sets the hashtable with key/value pairs
 * @ht: pointer to the hashtable
 * @key: key we are setting
 * @value: value we are setting
 *
 * Return: 0 if fail, 1 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int bucket;
	hash_node_t *entry, *new_bucket;

	if (key == NULL || ht == NULL || value == NULL || !(*key))
		return (0);
	bucket = key_index((const unsigned char *) key, ht->size);
	entry = ht->array[bucket];

	while (entry != NULL)
	{
		if (!strcmp(key, entry->key))
		{
			free(entry->value);
			entry->value = strdup(value);
			if (entry->value == NULL)
				return (0);
			return (1);
		}
		entry = entry->next;
	}
	new_bucket = malloc(sizeof(hash_node_t));
	if (new_bucket == NULL)
		return (0);
	new_bucket->value = strdup(value);
	if (new_bucket->value == NULL && value != NULL)
		return (0);
	new_bucket->key = strdup(key);
	new_bucket->next = NULL;
	if (ht->array[bucket] == NULL)
	{
		ht->array[bucket] = new_bucket;
	}
	else
	{
		new_bucket->next = (ht->array)[bucket];
		(ht->array)[bucket] = new_bucket;
	}
	return (1);
}

