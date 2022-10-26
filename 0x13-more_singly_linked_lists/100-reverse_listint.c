#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *prev_node;

	prev_node = NULL;
	while (*head)
	{
		tmp = (*head)->next;
		(*head)->next = prev_node;

		prev_node = *head;
		*head = tmp;
	}

	*head = prev_node;
	return (prev_node);
}
