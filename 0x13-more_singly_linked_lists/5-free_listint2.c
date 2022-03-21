#include "lists.h"
/**
 * free_listint2 - free the listint_t list
 * @head: head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (*head != NULL)
		ptr = *head;

	while (ptr->next != NULL)
	{
		*head = ptr->next;
		free(ptr);
		ptr = *head;
	}
	free(*head);
	*head = NULL;
}
