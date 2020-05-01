#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the
 * data (n) of a dlistint_t linked list.
 * @head: head of list.
 * Return: the sum of all nodes. If the list is empty, return 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		total = total + head->n;
		head = head->next;
	}
	return (total);
}
