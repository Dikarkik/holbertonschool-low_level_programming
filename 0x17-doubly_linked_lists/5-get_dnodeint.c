#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head of the list.
 * @index: the index of the node, starting from 0.
 * Return: the nth node.
 * if the node does not exist, return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int pos = 0;

	while (head)
	{
		if (pos == index)
		{
			return (head);
		}
		pos++;
		head = head->next;
	}
	return (NULL);
}
