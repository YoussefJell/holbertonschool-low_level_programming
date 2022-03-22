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
	size_t i = 0;

	if (head)
	{
		ptr = head;
		for (i = 0; ptr->next != NULL && i < index; i++)
		{
			ptr = ptr->next;
		}
		if (!ptr)
		{
			return (NULL);
		}
	}
	else
	{
		return (NULL);
	}
	return (ptr);
}
