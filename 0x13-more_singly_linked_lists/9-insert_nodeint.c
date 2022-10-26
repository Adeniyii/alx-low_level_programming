#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *prev_node, *tmp;

	tmp = *head;
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL && idx == 0)
	{
		*head = new_node;
		return (new_node);
	}

	for (i = 0; tmp != NULL; i++, tmp = tmp->next)
	{
		if (i == idx)
		{
			new_node->next = tmp;
			prev_node->next = new_node;

			return (new_node);
		}
		prev_node = tmp;
	}

	free(new_node);
	return (NULL);
}
