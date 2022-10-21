#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *pointer_to_first_node = *head;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->next = NULL;
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	/* use strdup to copy `str` to the heap, so it
	still exists after this function returns. It wouldn't be
	necessary if `str` was a malloc'd string instead of a string literal */

	if (pointer_to_first_node != NULL)
		new_node->next = pointer_to_first_node;

	*head = new_node;

	return (new_node);
}
