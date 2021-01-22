#include "hash_tables.h"

/**
 * key_index - gives user the index of a key
 * @key: key we search for
 * @size: size of the array
 *
 * Return: the index of a given key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value;

	value = hash_djb2(key) % size;

	return (value);
}
