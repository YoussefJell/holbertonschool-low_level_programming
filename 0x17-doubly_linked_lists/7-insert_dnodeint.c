#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node at index
 *
 * @h: head
 * @idx: index
 * @n: data
 * Return: ptr to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *ptr;
	unsigned int len;

	if (!h || !*h)
		return (NULL);

	len = dlistint_len(*h);
	if (idx > len + 1)
		return (NULL);

	if (*h == NULL && idx == 0)
		return (add_dnodeint(h, n));

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (idx >= len)
		return (add_dnodeint_end(h, n));

	ptr = get_dnodeint_at_index(*h, idx);
	ptr = ptr->prev;

	if (ptr && ptr->next != NULL)
	{
		newNode = malloc(sizeof(dlistint_t));
		if (newNode == NULL)
			return (NULL);
		newNode->n = n;
		newNode->prev = ptr;
		newNode->next = ptr->next;
		ptr->next->prev = newNode;
		ptr->next = newNode;
	}
	return (newNode);
}
/**
 * get_dnodeint_at_index - Get the dnodeint at index object
 *
 * @head: head of list
 * @index: index of node
 * Return: Node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = NULL;
	unsigned int i = 0;

	if (head)
	{
		ptr = head;
		while (ptr)
		{
			if (i == index)
				return (ptr);

			ptr = ptr->next;
			i++;
		}
	}
	return (ptr);
}
