#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: Number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
