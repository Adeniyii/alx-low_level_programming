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
	size_t i = 0;
	listint_t *ptr = *head;
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));

	if (!newNode || !head)
		return (NULL);

	newNode->n = n;

	while (ptr)
	{
		if (idx == 0)
		{
			newNode->next = (*head);
			*head = newNode;
			return (newNode);
		}
		if ((i + 1) == idx)
		{
			newNode->next = ptr->next;
			ptr->next = newNode;
			return (newNode);
		}
		ptr = ptr->next;
		i++;
	}
	free(newNode);
	return (NULL);
}
