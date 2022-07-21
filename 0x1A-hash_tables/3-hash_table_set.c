#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to update
 * @key: the key to be used for a hash table entry
 * @value: value associated with the key @key
 * Return: int (1) if successful, (0) otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	size_t index;
	hash_node_t *new_hash_node;

	if (!key || strcmp(key, "") == 0 || !ht || !value)
		return (0);

	new_hash_node = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (!new_hash_node)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	new_hash_node->key = (char *)key;
	new_hash_node->value = strdup(value);
	new_hash_node->next = NULL;

	if (!(ht->array[index]))
	{
		ht->array[index] = new_hash_node;
		return (1);
	}

	new_hash_node->next = ht->array[index];
	ht->array[index] = new_hash_node;
	return (1);
}
