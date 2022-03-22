#include "lists.h"
/**
 * pop_listint - free the listint_t list
 * @head: head of list
 * Return: data of first head
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	if (head)
	{
		ptr = (*head);
		data = (*head)->n;
		*head = (*head)->next;
		free(ptr);
	}
	else
	{
		return (0);
	}
	return (data);
}
