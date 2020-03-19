#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * If str is NULL, print [0] (nil).
 * @h: pointer to list_t element.
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	unsigned int index = 0;

	while (h != NULL)
	{
		if (!h->str || h->str[0] == '\0')
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		index++;
	}

	return (index);
}
