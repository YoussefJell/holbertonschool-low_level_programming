#include "lists.h"
/**
 * get_nodeint_at_index - Get the nodeint at index object
 *
 * @head: head node
 * @index: index
 * Return: listint_t*
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = NULL;
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
