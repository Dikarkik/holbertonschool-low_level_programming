#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: head node.
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len_list = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		len_list++;
		h = h->next;
	}
	return (len_list);
}
