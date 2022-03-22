#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts node at index
 * @head: head
 * @idx: index
 * @n: number
 * Return: listint_t*
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = NULL;
	listint_t *ptr2;
	unsigned int i = 0;

	ptr2 = malloc(sizeof(listint_t));
	if (ptr2 == NULL)
		return (NULL);
	ptr2->n = n;
	ptr2->next = NULL;

	if (head != NULL)
	{
		ptr = *head;
		while (ptr)
		{
			if (i == idx - 1)
			{
				ptr2->next = ptr->next;
				ptr->next = ptr2;
				return (ptr2);
			}
			ptr = ptr->next;
			i++;
		}
	}
	else
	{

		ptr2->next = (*head)->next;
		(*head)->next = ptr2;
	}
	return (ptr2);
}
