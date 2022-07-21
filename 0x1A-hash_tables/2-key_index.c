#include "hash_tables.h"
#include <stdio.h>

/**
 * key_index - get the index of a key
 * @key: key to be indexed
 * @size: size of the array of the hash table
 * Return: (unsigned long int) the index of the key
 */
size_t key_index(const unsigned char *key, __attribute((unused)) size_t size)
{
	return (hash_djb2(key) % size);
}
