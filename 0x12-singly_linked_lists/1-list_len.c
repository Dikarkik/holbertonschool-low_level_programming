#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: list_t list.
 * Return: the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t index = 0;

	while (h != NULL)
	{
		index++;
		h = h->next;
	}

	return (index);
}
