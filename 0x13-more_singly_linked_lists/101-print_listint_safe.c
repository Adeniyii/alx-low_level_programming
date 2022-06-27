#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	/* Applying Floyd's cycle-finding algorithm */
	const listint_t *slow_p = head, *fast_p = head;
	size_t nodeCount;

	if (head == NULL)
		return (98);

	while (slow_p)
	{
		printf("[%p] %d\n", (void *)slow_p, slow_p->n);

		if (fast_p->next->next)
		{
			fast_p = fast_p->next->next;
			slow_p = slow_p->next;
			if (slow_p == fast_p)
			{
				printf("[%p] %d\n", (void *)slow_p, slow_p->n);
				printf("[%p] %d\n", (void *)slow_p->next, slow_p->next->n);
				break;
			}
		}
		else
		{
			slow_p = slow_p->next;
		}
		nodeCount++;
	}
	return (nodeCount);
}
