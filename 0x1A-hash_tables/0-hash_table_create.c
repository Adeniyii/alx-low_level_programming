#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_create - Create a hash table of size @size
 *
 * @size: size of hash table array
 * Return: (hash_table_t*) created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **node_arr;
	hash_table_t *new_hash_table;

	new_hash_table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (!new_hash_table)
		return (NULL);

	node_arr = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);

	if (!node_arr)
	{
		free(new_hash_table);
		return (NULL);
	}

	new_hash_table->size = size;
	new_hash_table->array = node_arr;

	return (new_hash_table);
}
