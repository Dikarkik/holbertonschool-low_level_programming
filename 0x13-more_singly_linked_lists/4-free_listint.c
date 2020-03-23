#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: head of the listint_t list.
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *p_next;

	while (head)
	{
		if (head->next == NULL)
		{
			free(head);
			return;
		}
		else
		{
			p_next = head->next;
			free(head);
			head = p_next;
		}
	}
}
