#include "lists.h"
/**
 * add_dnodeint_end - adds node to end
 *
 * @head: head node
 * @n: data
 * Return: addr of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr;
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	if ((*head) == NULL)
	{
		newNode->n = n;
		newNode->next = *head;
		newNode->prev = NULL;
		*head = newNode;
	}
	else
	{
		ptr = (*head);
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		newNode->n = n;
		newNode->next = NULL;
		newNode->prev = ptr;
		ptr->next = newNode;
	}

	return (newNode);
}
