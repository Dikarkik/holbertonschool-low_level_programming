#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to pointer of head.
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previus = NULL;
	listint_t *the_next = NULL;

	if (!head || !*head)
		return (NULL);

	while (*head)
	{
		the_next = (*head)->next;
		(*head)->next = previus;
		previus = *head;
		*head = the_next;
	}
	*head = previus;

	return (*head);
}
