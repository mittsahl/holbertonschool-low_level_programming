#include "hash_tables.h"

/**
 * hash_djb2 - the djbs2 algorithm
 * @str: the constant string argument
 *
 * Return: some unsigned long int
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
