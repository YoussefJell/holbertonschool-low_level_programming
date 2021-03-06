#include "lists.h"
/**
 * sum_listint - sum of data in all elements
 * @head: head node
 * Return: sum of all ints
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
