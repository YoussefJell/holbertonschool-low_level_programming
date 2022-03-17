#include "lists.h"
/**
 * print_list - prints all elements of list_t
 * @h: head of list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr = NULL;
	size_t i = 0;

	if (h != NULL)
	{
		ptr = malloc(sizeof(h));
		ptr = h;
	}

	while (ptr != NULL)
	{
		i++;
		if (ptr->str != NULL)
			printf("[%d] %s\n", ptr->len, ptr->str);
		else
			printf("[0] (nil)\n");
		ptr = ptr->next;
	}
	return (i);
}
