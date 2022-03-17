#include "lists.h"
/**
 * free_list - free the list_t list
 * @head: head of list
 */
void free_list(list_t *head)
{
	list_t *ptr = head, *ptrnext;

	while (ptr != NULL)
	{
		ptrnext = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = ptrnext;
	}
}
