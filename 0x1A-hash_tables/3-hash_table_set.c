#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int set_duplicate_key(const char *key, const char *value, hash_node_t *tmp);

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

	if (!key || *key == '\0' || !ht || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	if (set_duplicate_key(key, value, ht->array[index]))
		return (1);

	new_hash_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (!new_hash_node)
		return (0);

	new_hash_node->key = (char *)key;
	new_hash_node->value = strdup(value);
	new_hash_node->next = NULL;

	if (new_hash_node->value == NULL)
	{
		free(new_hash_node->value);
		free(new_hash_node);
		return (0);
	}

	if (!(ht->array[index]))
	{
		ht->array[index] = new_hash_node;
		return (1);
	}

	new_hash_node->next = ht->array[index];
	ht->array[index] = new_hash_node;
	return (1);
}

/**
 * set_duplicate_key - Set new value if key already exists in table
 * @tmp: pointer to linked list head of current bucket
 * @key: the key to be used for a hash table entry
 * @value: value associated with the key @key
 * Return: int (1) if successful, (0) otherwise
 */
int set_duplicate_key(const char *key, const char *value, hash_node_t *tmp)
{
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			tmp->value = (char *)value;
			return (1);
		}
		tmp = tmp->next;
	}
	return (0);
}
