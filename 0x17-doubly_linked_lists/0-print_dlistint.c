#include "lists.h"

/**
 * print_dlistint - Print elements of a linked list
 *
 * @h: pointer to head of the linked list
 * Return: node count of linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int node_count = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		node_count++;
	}

	return (node_count);
}
