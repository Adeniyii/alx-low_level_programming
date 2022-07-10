#include "lists.h"

/**
 * sum_dlistint - compute sum of all data of linked list
 *
 * @head: pointer to linked list head
 * Return: sum of linked list data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
