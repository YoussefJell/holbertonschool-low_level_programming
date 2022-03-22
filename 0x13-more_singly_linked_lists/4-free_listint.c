#include "lists.h"
/**
 * free_listint - free the listint_t list
 * @head: head of list
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
	free(head);
}
