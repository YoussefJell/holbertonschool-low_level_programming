#include "lists.h"
/**
 * sum_listint - sum of data in all elements
 * @head: head node
 * Return: sum of all ints
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = NULL;
	int sum = 0;

	if (head != NULL)
	{
		ptr = head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
			sum += ptr->n;
		}
		if (!ptr)
		{
			return (0);
		}
	}
	else
	{
		return (0);
	}
	return (sum);
}
