#include "lists.h"
/**
 * free_listint2 - free the listint_t list
 * @head: head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head)
	{
		while (head)
		{
			ptr = *head;
			*head = (*head)->next;
			free(ptr);
		}
	}
	else
	{
		return;
	}
	free(*head);
	*head = NULL;
}
