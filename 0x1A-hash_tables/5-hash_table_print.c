#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	int first_loop = 1;

	if (!ht || !ht->array || ht->size == 0)
		return;

	printf("{");

	for (i = 0, tmp = ht->array[0]; i < ht->size; i++, tmp = ht->array[i])
	{
		while (tmp)
		{
			if (!first_loop)
				printf(", ");

			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;

			if (tmp)
				printf(", ");

			first_loop = 0;
		}
	}
	printf("}\n");
}
