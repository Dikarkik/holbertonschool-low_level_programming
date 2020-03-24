#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to pointer of head.
 * Return: the head nodes data (n).
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *new_head;

	if (*head)
	{
		n = (*head)->n;
		new_head = (*head)->next;
		free(*head);
		*head = new_head;
	}

	return (n);
}
