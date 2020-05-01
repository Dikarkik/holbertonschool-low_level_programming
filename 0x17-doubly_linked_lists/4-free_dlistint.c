#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list.
 * @head: head of the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *position;

	while (head)
	{
		position = head;
		head = head->next;
		free(position);
	}
}
