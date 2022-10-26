#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev_node, *tmp;

	tmp = *head;
	prev_node = NULL;

	for (i = 0; tmp != NULL; i++, tmp = tmp->next)
	{
		if (index == i)
		{
			if (prev_node == NULL)
				*head = tmp->next;
			else
				prev_node->next = tmp->next;

			free(tmp);
			return (1);
		}
		prev_node = tmp;
	}
	return (-1);
}
