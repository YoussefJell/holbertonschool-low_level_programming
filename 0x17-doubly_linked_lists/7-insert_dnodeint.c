#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node at index
 *
 * @h: head
 * @idx: index
 * @n: data
 * Return: ptr to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *ptr;
	unsigned int i = 0;

	if (!h || !*h)
		return (NULL);

	ptr = (*h);
	while (ptr != NULL && i < idx - 1)
	{
		if (ptr->next != NULL)
		{
			ptr = ptr->next;
			i++;
		}
		else
			return (NULL);
	}
	if (ptr)
	{
		newNode = malloc(sizeof(dlistint_t));
		if (newNode == NULL)
			return (NULL);
		newNode->n = n;
		newNode->prev = ptr;
		newNode->next = ptr->next;
		ptr->next->prev = newNode;
		ptr->next = newNode;
	}

	return (newNode);
}
