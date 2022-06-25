#include "lists.h"

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
