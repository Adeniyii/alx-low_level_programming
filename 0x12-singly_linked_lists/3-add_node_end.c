#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = *head;
	list_t *newNode = (list_t *)malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->len = strlen(str);
	newNode->str = strdup(str);
	newNode->next = NULL;

	if (*head == NULL)
	{

		*head = newNode;
		return (newNode);
	}

	while (ptr)
	{
		if (ptr->next == NULL)
		{
			ptr->next = newNode;
			break;
		}
		ptr = ptr->next;
	}
	return (newNode);
}
