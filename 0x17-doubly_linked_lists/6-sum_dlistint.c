#include "lists.h"
/**
 * sum_dlistint - sum of data in doubly linked list
 *
 * @head: head of list
 * Return: Sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr;

	if (head == NULL)
		return (0);
	ptr = head;
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
