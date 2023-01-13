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
	dlistint_t *current = *h;
	unsigned int counter = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (counter < idx - 1)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
		counter++;
	}

	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	new_node->prev = current;
	new_node->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
