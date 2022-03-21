#include "lists.h"
/**
 * free_listint - free the listint_t list
 * @head: head of list
 */
void free_listint(listint_t *head)
{
	listint_t *ptr = head;

	while (ptr->next != NULL)
	{
		head = ptr->next;
		free(ptr);
		ptr = head;
	}
	free(head);
}
