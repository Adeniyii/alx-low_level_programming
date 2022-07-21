#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *ptr, *tmp;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];

		while (tmp != NULL)
		{
			ptr = tmp->next;

			free(tmp->value);
			free(tmp->key);
			free(tmp);

			tmp = ptr;
		}
	}
	free(ht->array);
	free(ht);
}
