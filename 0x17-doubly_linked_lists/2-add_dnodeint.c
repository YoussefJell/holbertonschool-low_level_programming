#include "lists.h"
/**
 * add_dnodeint - adds node to beginning
 *
 * @head: head node
 * @n: data
 * Return: addr of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;
	*head = newNode;
	return (*head);
}
