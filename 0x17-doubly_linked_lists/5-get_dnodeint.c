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
	dlistint_t *ptr;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	ptr = head;
	while (ptr != NULL && i < index)
	{
		if (ptr->next != NULL)
		{
			ptr = ptr->next;
			i++;
		}
		else
			return (NULL);
	}
	return (ptr);
}
