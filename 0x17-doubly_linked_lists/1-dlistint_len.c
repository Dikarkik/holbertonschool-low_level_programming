#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: head of the list.
 * Return: the number of elements of the linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len_list;

	if (h == NULL)
		return (0);

	while (h)
	{
		len_list++;
		h = h->next;
	}

	return (len_list);
}
