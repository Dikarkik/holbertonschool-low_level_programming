#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head of a list_t list.
 * @str: string. str needs to be duplicated.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *reference = *head;
	list_t *new = NULL;
	int len_str = 0;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	while (str[len_str])
		len_str++;

	if (str == NULL)
		new->str = NULL;
	else
		new->str = strdup(str);

	new->len = len_str;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		reference = *head;

		while (reference->next != NULL)
			reference = reference->next;

		reference->next = new;
	}
	return (new);
}
