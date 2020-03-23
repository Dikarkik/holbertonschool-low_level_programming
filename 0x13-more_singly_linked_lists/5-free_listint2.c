#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL.
 * @head: pointer to the head of the listint_t list.
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *p_next;

	while (*head)
	{
		if ((*head)->next == NULL)
		{
			free(*head);
			return;
		}
		else
		{
			p_next = (*head)->next;
			free(*head);
			*head = p_next;
		}
	}

	head = NULL;
}
