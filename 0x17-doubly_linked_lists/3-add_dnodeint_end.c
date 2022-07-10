#include "lists.h"
#include <stdlib.h>
#include <stdbool.h>

/**
 * add_dnodeint_end - insert node at end of linked list
 *
 * @head: pointer to pointer to linked list
 * @n: data for new node
 * Return: address of newly inserted node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = *head;
	dlistint_t *new_node;

	if (!head)
		return (NULL);

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (true)
	{
		if (ptr->next == NULL)
		{
			ptr->next = new_node;
			new_node->prev = ptr;

			return (new_node);
		}
		ptr = ptr->next;
	}
}
