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
	listint_t *ptr = *head;
	size_t i = 0;
	listint_t *tmp;

	while (ptr)
	{
		if (index == 0)
		{
			tmp = ptr->next;
			free(ptr);
			*head = tmp;
			return (1);
		}
		if (i + 1 == index)
		{
			tmp = ptr->next;
			ptr->next = ptr->next->next;
			free(tmp);
			return (1);
		}
		ptr = ptr->next;
		i++;
	}
	return (-1);
}
