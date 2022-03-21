#include "lists.h"
/**
 * add_nodeint - adding node to beginning
 * @head: head of node
 * @n: data of node
 * Return: address of new element or null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;

	tmp->next = *head;
	*head = tmp;

	return (*head);
}
