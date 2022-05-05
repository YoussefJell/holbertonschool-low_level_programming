#include "lists.h"
/**
 * free_dlistint - free the dlistint_t list
 * @head: head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head, *ptrnext;

	while (ptr != NULL)
	{
		ptrnext = ptr->next;
		free(ptr);
		ptr = ptrnext;
	}
}
