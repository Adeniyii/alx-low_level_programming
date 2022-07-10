#include "lists.h"

/**
 * dlistint_len - find length of linked list
 *
 * @h: pointer to head of the linked list
 * Return: node count of linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}

	return (node_count);
}
