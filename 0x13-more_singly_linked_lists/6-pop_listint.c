#include "lists.h"
/**
 * pop_listint - free the listint_t list
 * @head: head of list
 * Return: data of first head
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data = 0;

	if (*head != NULL)
	{
		ptr = (*head)->next;
		data = (*head)->n;
		free(*head);
		*head = ptr;
	}
	return (data);
}
