#include "lists.h"
/**
 * add_nodeint_end - adding node to end
 * @head: head of node
 * @n: data of node
 * Return: address of new element or null
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp;
	listint_t *current;
	listint_t *ptr;

	if (*head == NULL)
	{
		current = malloc(sizeof(listint_t));
		if (current == NULL)
			return (NULL);
		current->n = n;
		current->next = NULL;
		*head = current;
	}
	else
	{
		ptr = *head;
		tmp = malloc(sizeof(listint_t));
		if (tmp == NULL)
			return (NULL);
		tmp->n = n;
		tmp->next = NULL;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = tmp;
	}
	return (ptr);
}
