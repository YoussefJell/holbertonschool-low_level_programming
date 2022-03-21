#include "lists.h"
/**
 * pop_listint - free the listint_t list
 * @head: head of list
 * Return: data of first head
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;

	if (*head != NULL)
		ptr = *head;

	int data = (*head)->n;

	*head = (*head)->next;
	free(ptr);
	return (data);
}
