#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new_node node at a given position
 * @h: pointer to head of list
 * @idx: is the index of the list where the new_node node should be added.
 * Index starts at 0
 * @n: data for new_node
 * Return: the address of the new_node, or NULL if it failed
 * if it is not possible to add the new_node at index idx,
 * do not add the new_node and return NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current;
	unsigned int counter = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (idx == 1)
		return (add_dnodeint(h, n));

	current = *h;

	while (counter < idx - 1)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
		counter++;
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;
	current->next = new_node;
	new_node->next->prev = new_node;

	return (new_node);
}
