#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	int popped;
	listint_t *tmp;

	if (!head || *head == NULL)
		return (0);

	popped = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (popped);
}
