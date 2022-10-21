#include "lists.h"

/**
 * print_list - A function that prints all the elements of a list_t list
 * @h: the linked list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t const *tmp = h;
	size_t count = 0;

	while (tmp)
	{
		if (tmp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", tmp->len, tmp->str);

		tmp = tmp->next;
		count++;
	}
	return (count);
}
