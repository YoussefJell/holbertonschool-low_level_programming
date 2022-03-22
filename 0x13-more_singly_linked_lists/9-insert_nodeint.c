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
	listint_t *ptr = NULL, *ptr2;

	ptr2 = malloc(sizeof(listint_t));
	if (ptr2 == NULL)
		return (NULL);
	ptr2->n = n;
	ptr2->next = NULL;

	if (*head != NULL)
	{
		ptr = *head;

		while (idx != 1)
		{
			ptr = ptr->next;
			idx--;
		}
		if (ptr)
		{
			ptr2->next = ptr->next;
			ptr->next = ptr2;
		}
		else
		{
			return (NULL);
		}
	}
	return (ptr2);
}
