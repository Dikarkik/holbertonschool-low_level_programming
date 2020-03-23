#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a list.
 * @head: pointer to pointer of head.
 * @index: index of the node that should be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *reference;
	listint_t *previus = NULL;

	if (!*head || !head)
		return (-1);

	reference = *head;

	while (reference)
	{
		if (count == index)
		{
			if (previus)
				previus->next = reference->next;
			else
				*head = reference->next;

			free(reference);
			return (1);
		}

		previus = reference;
		reference = reference->next;
		count++;
	}

	return (-1);
}
