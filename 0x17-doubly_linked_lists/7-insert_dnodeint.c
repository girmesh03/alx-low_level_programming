#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new_node at a given position
 * @h: pointer to head of list
 * @idx: is the index of the list where the new_node should be added,
 * and Index starts at 0.
 * @n: data to be added to the new_node node.
 * Return: the address of the new_node, or NULL if it failed
 * if it is not possible to add the new_node at index idx,
 * do not add the new_node and return NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	/* create a pointer to a node */
	dlistint_t *new_node;
	/* let current point to the head of the list */
	dlistint_t *current = *h;
	/* a variable to keep track of the index */
	unsigned int counter = 0;
	/* if the list is empty and idx is not 0, return NULL */
	if (current == NULL && idx != 0)
		return (NULL);
	/* if idx is 0, add a new_node node at the beginning */
	if (idx == 0)
		return (add_dnodeint(h, n));
	/* loop through the list until the index is reached */
	while (counter < idx - 1)
	{
		/* if the index is greater than the number of nodes */
		if (current == NULL)
			return (NULL);
		/* let current point to the next node */
		current = current->next;
		/* increment the counter */
		counter++;
	}
	/* if the index is the last node */
	/* add a new_node node at the end */
	if (current->next == NULL)
		return (add_dnodeint_end(h, n));
	/* allocate memory for the new_node node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	/* add the data to the new_node node */
	new_node->n = n;
	/* link the new_node node to the list */
	new_node->next = current->next;
	new_node->next->prev = new_node;
	new_node->prev = current;
	current->next = new_node;
	/* return the address of the new_node node */
	return (new_node);
}
