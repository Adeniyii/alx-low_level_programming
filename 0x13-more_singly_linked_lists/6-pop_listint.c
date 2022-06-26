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
	if (*head == NULL)
		return (0);
	else
	{
		listint_t *popped = *head;
		listint_t *tmp = (*head)->next;
		*head = tmp;

		return (popped->n);
	}
}
