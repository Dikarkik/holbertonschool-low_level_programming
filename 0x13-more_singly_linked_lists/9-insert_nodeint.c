#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to pointer of head.
 * @idx: index of the list where the new node
 * should be added. Index starts at 0.
 * @n: value of the new node.
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new_node;
	listint_t *reference;
	listint_t *previus = NULL;

	if (!*head || !head)
		return (NULL);

	reference = *head;

	while (reference)
	{
		if (count == idx)
		{
			new_node = malloc(sizeof(listint_t));

			if (new_node == NULL)
				return (NULL);

			new_node->n = n;
			new_node->next = reference;

			if (previus)
				previus->next = new_node;
			else
				*head = new_node;

			return (new_node);
		}

		previus = reference;
		reference = reference->next;
		count++;
	}

	return (NULL);
}
