#include "lists.h"

/**
 * get_dnodeint_at_index - Get the dnodeint node at index
 *
 * @head: pointer to linked list head
 * @index: index of node to return
 * Return: node at given index, (NULL) if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
