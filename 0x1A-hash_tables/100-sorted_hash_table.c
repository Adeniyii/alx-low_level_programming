#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief
 *
 * @param size
 * @return shash_table_t*
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->array = malloc(sizeof(shash_node_t) * size);
	if (new_table->array == NULL)
		return (NULL);

	new_table->size = size;
	new_table->shead = NULL;
	new_table->stail = NULL;

	return (new_table);
}

/**
 * @brief
 *
 * @param ht
 * @param key
 * @param value
 * @return int
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *ptr;

	if (!key || key[0] == '\0' || !ht || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	new_node = bucket_create(key, value);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	/* place new node into sorted linked list
	shead-> [k, v, snext, sprev]-> [k, v, snext, sprev]-> null
	 */
	ptr = ht->shead;
	while (ptr)
	{
		if (strcmp(ptr->key, new_node->key) >= 0)
		{
			new_node->snext = ptr;
			new_node->sprev = ptr->sprev;
			ptr->sprev = new_node;

			/* if new node placed before sorted head */
			if (ht->shead->sprev != NULL)
				ht->shead = new_node;
			else
				new_node->sprev->snext = new_node;

			return (1);
		}
		ptr = ptr->snext;
	}

	/* if new node is largest element in sorted
	 or if ht->stail not previously set */
	if (ht->stail)
		ht->stail->snext = new_node;

	new_node->sprev = ht->stail;
	ht->stail = new_node;

	/* if ht->shead not previously set */
	if (!ht->shead)
		ht->shead = new_node;

	return (1);
}

/**
 * @brief
 *
 * @param ht
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *ptr = ht->shead;

	if (ht == NULL || ptr == NULL)
		return;

	printf("{");

	while (ptr)
	{
		printf("'%s': '%s'", ptr->key, ptr->value);

		ptr = ptr->snext;
		if (ptr != NULL)
			printf(", ");
		else
			printf("}\n");
	}
}

/*
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;
*/

shash_node_t *bucket_create(const char *key, const char *value)
{
	char *value_cpy;
	shash_node_t *new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (NULL);

	value_cpy = strdup(value);
	if (value_cpy == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;
	new_node->snext = NULL;
	new_node->sprev = NULL;
	new_node->key = (char *)key;
	new_node->value = value_cpy;

	return (new_node);
}
