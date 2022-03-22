#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes node at index
 * @head: head
 * @index: index
 * Return: listint_t*
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = NULL, *tmp = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (head != NULL)
	{
		ptr = *head;
		if (index != 0)
		{
			for (i = 0; ptr->next != NULL && i + 1 < index; i++)
			{
				ptr = ptr->next;
			}
			if (ptr)
			{
				tmp = ptr->next;
				ptr->next = ptr->next->next;
				free(tmp);
				return (1);
			}
			else
			{
				return (-1);
			}
		}
		else
		{
			tmp = *head;
			*head = (*head)->next;
			free(tmp);
			return (1);
		}
	}
	return (-1);
}
