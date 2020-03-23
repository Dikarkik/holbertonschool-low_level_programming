#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a list.
 * @head: pointer to head.
 * Return: the sum of all the data (n) of a listint_t linked list.
 * if the list is empty, return 0.
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	if (!head)
		return (0);

	while (head)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
