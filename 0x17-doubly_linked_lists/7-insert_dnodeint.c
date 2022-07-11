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
	unsigned int i;
	dlistint_t *new_node;
	dlistint_t *ptr = *h;

	if (!h)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; ptr && i < idx; i++)
	{
		if (i == idx - 1)
		{
			if (ptr->next == NULL)
				return (add_dnodeint_end(h, n));

			new_node->next = ptr->next;
			new_node->prev = ptr;
			ptr->next->prev = new_node;
			ptr->next = new_node;
			return (new_node);
		}
		ptr = ptr->next;
	}
	return (NULL);
}
