#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the list
 * @idx: index of the list where the new node should
 * be added. Index starts at 0
 * @n: value to store in the new node
 * Return: the address of the new node, or NULL if it failed
 * If it is not possible to add the new node
 * at index idx, do not add the new node and return NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *current_node = NULL;
	dlistint_t *new_node = NULL;

	if (h == NULL && idx == 0)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->next = NULL;
		new_node->prev = NULL;
	}
	if (new_node == NULL)
		return (NULL);
		*h = new_node;
	current_node = *h;
	while (current_node)
	{
		if (count == idx)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL);
			if (current_node->prev != NULL)
				current_node->prev->next = new_node;
			if (count == 0)
				*h = new_node;
			new_node->prev = current_node->prev;
			new_node->next = current_node;
			current_node->prev = new_node;
		}
		current_node = current_node->next;
		count++;
	}
	new_node->n = n;
	return (new_node);
}
