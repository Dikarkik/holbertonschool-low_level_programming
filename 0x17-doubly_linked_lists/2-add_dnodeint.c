#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: double pointer of the head.
 * @n: value to store.
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *backup = NULL;

	if (head == NULL)
		return (NULL);
	backup = *head;
	*head = malloc(sizeof(dlistint_t));
	if (*head == NULL)
	{
		*head = backup;
		return (NULL);
	}
	(*head)->n = n;
	(*head)->prev = NULL;
	(*head)->next = backup;
	if (backup)
		backup->prev = *head;
	return (*head);
}
