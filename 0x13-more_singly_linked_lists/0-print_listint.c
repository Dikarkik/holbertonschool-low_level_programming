#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: head of the listint_t list.
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t len_list = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		len_list++;
	}

	return (len_list);
}
