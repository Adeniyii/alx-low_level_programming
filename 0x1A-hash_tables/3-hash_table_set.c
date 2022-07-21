#include "hash_tables.h"
#include <stdlib.h>
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
	char *value_cpy;
	size_t index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *new_hash_node = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (!key)
		return (0);

	if (!new_hash_node)
		return (0);

	value_cpy = malloc(sizeof(char) * strlen(value));

	if (!value_cpy)
	{
		free(new_hash_node);
		return (0);
	}

	new_hash_node->key = (char *)key;
	new_hash_node->next = NULL;
	new_hash_node->value = strcpy(value_cpy, value);

	if (!ht->array[index])
	{
		ht->array[index] = new_hash_node;
		return (1);
	}

	new_hash_node->next = ht->array[index];
	ht->array[index] = new_hash_node;

	return (1);
}
