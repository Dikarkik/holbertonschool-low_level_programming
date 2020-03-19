#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: head of list_t list.
 * @str: str needs to be duplicated.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *backup;
	int len_str = 0;

	backup = *head;

	*head = malloc(sizeof(list_t));

	if (*head == NULL)
		return (NULL);

	while (str[len_str])
		len_str++;

	if (str == NULL)
		(*head)->str = NULL;
	else
		(*head)->str = strdup(str);

	(*head)->len = len_str;
	(*head)->next = backup;

	return (*head);
}
