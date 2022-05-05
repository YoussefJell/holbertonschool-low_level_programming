#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: head node
 * @index: index
 * Return: 1 if success -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL, *ptr;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	ptr = (*head);
	if (index == 0)
	{
		delete_first(head);
	}
	tmp = *head;
	while (tmp)
	{
		if (i == index - 1)
		{
			ptr = tmp;
			tmp->next->prev = ptr;
			tmp->next = ptr->next->next;
			free(ptr);
			return (1);
		}
		tmp = tmp->next;
		i++;
	}
	return (-1);
}
/**
 * delete_first - deletes first node
 * @head: head node
 */
void delete_first(dlistint_t **head)
{
	dlistint_t *ptr = *head, *tmp = NULL;

	tmp = *head;
	if (ptr->next)
	{
		ptr = ptr->next;
		ptr->prev = tmp->prev;
		*head = ptr;
	}
	else
	{
		*head = NULL;
	}

	free(tmp);
}
