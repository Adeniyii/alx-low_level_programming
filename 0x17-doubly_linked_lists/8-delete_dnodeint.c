#include "lists.h"

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
	unsigned int i = 0;

	if (!head)
		return (-1);

	while (ptr)
	{
		if (index == 0)
		{
			*head = (*head)->next ? (*head)->next : NULL;
			return (1);
		}

		if (index == i)
		{
			ptr->prev->next = ptr->next;
			return (1);
		}
		ptr = ptr->next;
		i++;
	}
	return (-1);
}
