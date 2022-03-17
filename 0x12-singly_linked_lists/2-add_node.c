#include "lists.h"
/**
 * add_node - adds node to the beginning of a list_t list
 * @head: head of list
 * @str: string to add
 * Return: Address of new element or NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	int i = 0;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
	tmp->str = strdup(str);
	tmp->next = NULL;

	while (str[i] != '\0')
		i++;
	tmp->len = i;

	tmp->next = *head;
	*head = tmp;
	return (*head);
}
