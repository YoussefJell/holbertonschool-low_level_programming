#include "lists.h"
/**
 * listint_len - count number of elements
 * @h: header node
 * Return: number of elements in listint_t
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = NULL;
	size_t i = 0;

	if (h != NULL)
	{
		ptr = h;
		while (ptr != NULL)
		{
			i++;
			ptr = ptr->next;
		}
	}
	return (i);
}
