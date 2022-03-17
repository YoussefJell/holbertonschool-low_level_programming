#include "lists.h"
/**
 * add_node_end - adds a node in the end of list_t
 * @head: head of list
 * @str: data for element
 * Return: new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *temp;
	list_t *ptr;
	int i;

	if (*head == NULL)
	{
		i = 0;
		current = malloc(sizeof(list_t));
		if (current == NULL)
			return (NULL);
		current->str = strdup(str);
		current->next = NULL;
		while (str[i] != '\0')
			i++;
		current->len = i;
		*head = current;
		return (current);
	}
	else
	{
		i = 0;
		ptr = *head;
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);
		temp->str = strdup(str);
		temp->next = NULL;
		while (str[i] != '\0')
			i++;
		temp->len = i;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
	return (ptr);
}
