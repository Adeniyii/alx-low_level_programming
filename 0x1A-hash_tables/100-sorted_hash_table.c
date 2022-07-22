#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * shash_table_create - create a sorted hash table
 * @size: size of the hash table's array
 * Return: the created hash table
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
 * shash_table_set - insert hash node into a sorted hash table
 * @ht: hash table
 * @key: key of the hash node
 * @value: value of the hash node
 * Return: (1) if successful, (0) otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *ptr;

	if (!key || key[0] == '\0' || !ht || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	new_node = bucket_create(key, value);

	ptr = ht->array[index];
	while (ptr)
	{
		if (strcmp(ptr->key, new_node->key) == 0)
		{
			free(ptr->value);
			ptr->value = new_node->value;
			free(new_node);
			return (1);
		}
		ptr = ptr->next;
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	ptr = ht->shead;
	while (ptr)
	{
		if (strcmp(ptr->key, new_node->key) > 0)
		{
			new_node->snext = ptr;
			new_node->sprev = ptr->sprev;
			ptr->sprev = new_node;

			if (ht->shead->sprev != NULL)
				ht->shead = new_node;
			else
				new_node->sprev->snext = new_node;

			return (1);
		}
		ptr = ptr->snext;
	}
	if (ht->stail)
		ht->stail->snext = new_node;

	new_node->sprev = ht->stail;
	ht->stail = new_node;

	if (!ht->shead)
		ht->shead = new_node;

	return (1);
}

/**
 * shash_table_get - retrieve hash node value from a sorted hash table
 * @ht: hash table
 * @key: key of the hash node
 * Return: node value if found, (NULL) otherwise
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *ptr;

	if (ht == NULL || !key || key[0] == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[index];

	while (ptr)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			return (ptr->value);
		}
	}
	return (NULL);
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *ptr, *tmp;

	if (!ht || !ht->shead)
		return;

	tmp = ht->shead;

	while (tmp != NULL)
	{
		ptr = tmp->snext;

		free(tmp->value);
		free(tmp);

		tmp = ptr;
	}
	free(ht->array);
	free(ht);
}

/**
 * shash_table_print - print contents of a sorted hash table
 * @ht: sorted hash table
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

/**
 * shash_table_print_rev - print contents of a sorted hash table
 * in reverse order
 * @ht: sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *ptr = ht->stail;

	if (ht == NULL || ptr == NULL)
		return;

	printf("{");

	while (ptr)
	{
		printf("'%s': '%s'", ptr->key, ptr->value);

		ptr = ptr->sprev;
		if (ptr != NULL)
			printf(", ");
		else
			printf("}\n");
	}
}

/**
 * bucket_create - create a hash table node (bucket)
 * @key: key for inserting the hash node into a hash table
 * @value: value of the hash node
 * Return: the created hash node (bucket)
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
