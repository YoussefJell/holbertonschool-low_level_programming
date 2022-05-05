#include "lists.h"
/**
 * get_dnodeint_at_index - Get the dnodeint at index object
 *
 * @head: head of list
 * @index: index of node
 * Return: Node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = NULL;
	unsigned int i = 0;

	if (head)
	{
		ptr = head;
		while (ptr)
		{
			if (i == index)
				return (ptr);

			ptr = ptr->next;
			i++;
		}
	}
	return (ptr);
}
