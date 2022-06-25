#include "lists.h"

/**
 * print_list - A function that prints all the elements of a list_t list
 * @h: the linked list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *cur = h;
	int nodeCount = 0;

	while (cur)
	{
		printf("[%d] %s \n", cur->str ? cur->len : 0, cur->str ? cur->str : "(nil)");
		cur = cur->next;
		nodeCount++;
	}

	return (nodeCount);
}
