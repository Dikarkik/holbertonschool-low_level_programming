#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: head of the linstint_t list.
 * Return: number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t len_list;
	listint_t *reference;

	if (h == NULL)
		return (0);

	len_list = 1;
	reference = h->next;

	while (reference)
	{
		len_list++;
		reference = reference->next;
	}

	return (len_list);
}
