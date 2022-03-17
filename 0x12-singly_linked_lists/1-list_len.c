#include "lists.h"
/**
 * list_len - returns number of elements in a linked list
 * @h: head of list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr = NULL;
	size_t i = 0;

	if (h != NULL)
	{
		ptr = h;
	}

	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}
