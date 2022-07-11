#include "lists.h"
#include <stdlib.h>

size_t dlistint_len(const dlistint_t *h);

/**
 * delete_dnodeint_at_index - delete node at index idx
 *
 * @head: pointer to pointer to linked list
 * @index: index at which to delete new node
 * Return: (1) on success, (-1) if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	dlistint_t *tmp;
	unsigned int i = 0;

	if (!head || !(*head) || index >= dlistint_len(*head))
		return (-1);

	while (ptr)
	{
		if (index == 0)
		{
			tmp = *head;
			*head = (*head)->next ? (*head)->next : NULL;
			free(tmp);
			return (1);
		}

		if (index == i)
		{
			tmp = ptr;
			ptr->prev->next = ptr->next;
			free(tmp);
			return (1);
		}
		ptr = ptr->next;
		i++;
	}
	return (-1);
}

/**
 * dlistint_len - returns the number of nodes in a doubly linked list
 * @h: pointer to the list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
