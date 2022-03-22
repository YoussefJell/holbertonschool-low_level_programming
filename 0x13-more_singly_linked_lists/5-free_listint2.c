#include "lists.h"
/**
 * free_listint2 - free the listint_t list
 * @head: head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	while (*head)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	free(*head);
	head = 0;
}
