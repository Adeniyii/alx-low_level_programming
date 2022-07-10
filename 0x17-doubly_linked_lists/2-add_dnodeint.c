#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * add_dnodeint - insert node at head of linked list
 *
 * @head: pointer to pointer to linked list
 * @n: data for new node
 * Return: address of newly inserted node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (!head)
		return (NULL);

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
