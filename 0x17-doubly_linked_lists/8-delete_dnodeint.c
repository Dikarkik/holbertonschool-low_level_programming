#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at
 * index index of a dlistint_t linked list
 * @head: head of the list
 * @index: is the index of the node that
 * should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = NULL;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	current = *head;
	while (current)
	{
		if (count == index)
		{
			if (count == 0)
			{
				if (current->next)
					current->next->prev = NULL;
				*head = current->next;
			}
			else if (current->next == NULL)
				current->prev->next = NULL;
			else
			{
				current->next->prev = current->prev;
				current->prev->next = current->next;
			}
			free(current);
			return (1);
		}
		current = current->next;
		count++;
	}
	return (-1);
}
