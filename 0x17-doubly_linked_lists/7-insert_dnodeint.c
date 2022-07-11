#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - insert node at index idx
 *
 * @h: pointer to pointer to linked list
 * @idx: index at which to insert new node
 * @n: value of new node
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *ptr = *h;
	dlistint_t *new_node;

	if (!h)
		return (NULL);

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (idx == 0 && *h == NULL)
	{
		*h = new_node;
		return (new_node);
	}

	while (ptr != NULL)
	{
		if (i == idx)
		{
			new_node->next = ptr;
			new_node->prev = ptr->prev;

			if (idx == 0)
				*h = new_node;
			else
				ptr->prev->next = new_node;

			return (new_node);
		}
		ptr = ptr->next;
		i++;
	}
	free(new_node);
	return (NULL);
}
