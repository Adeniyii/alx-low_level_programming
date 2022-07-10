#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free linked list
 *
 * @head: pointer to linked list head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;

	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
