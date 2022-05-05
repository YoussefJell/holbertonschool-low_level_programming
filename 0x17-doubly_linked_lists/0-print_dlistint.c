#include "lists.h"
/**
 * print_dlistint - prints list elems
 * @h: head of list
 * Return: Number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr;
	unsigned int count = 0;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
