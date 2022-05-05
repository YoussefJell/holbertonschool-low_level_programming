#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: head node
 * @index: index
 * Return: 1 if success -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL, *ptr = NULL;
	unsigned int i = 0, len;

	if (!head || !*head)
		return (-1);

	len = dlistint_len(*head);
	if (index == len - 1)
	{
		delete_last(head);
		return (1);
	}
	if (index == 0)
	{
		delete_first(head);
		return (1);
	}
	ptr = (*head);
	tmp = *head;
	while (tmp)
	{
		if (i == index)
		{
			ptr = tmp;
			tmp->prev->next = tmp->next;
			tmp->next->prev = tmp->prev;
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
/**
 * delete_last - deletes first node
 * @head: head node
 */
void delete_last(dlistint_t **head)
{
	dlistint_t *ptr = *head;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->prev->next = NULL;
	free(ptr);
}
