#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the head of the listint_t list.
 * @n: number to store in the new node.
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *reference;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
		*head = new_node;
	else
	{
		reference = *head;

		while (reference->next)
			reference = reference->next;

		reference->next = new_node;
	}

	return (new_node);
}
