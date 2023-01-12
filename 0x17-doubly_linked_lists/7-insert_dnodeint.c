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
	/* declare temp pointer and set to head */
	/* declare new_node pointer */
	dlistint_t *tmp = *h, *new_node;

	/* if idx is 0, call add_dnodeint */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* traverse list until idx is not equal to 1 */
	for (; idx != 1; idx--)
	{
		/* if tmp is NULL, return NULL */
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}

	/* if tmp->next is NULL, call add_dnodeint_end */
	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	/* allocate memory for new_node */
	new_node = malloc(sizeof(dlistint_t));
	/* if malloc fails, return NULL */
	if (new_node == NULL)
		return (NULL);

	/* set new_node->n to n */
	new_node->n = n;
	/* set new_node->next to tmp->next */
	new_node->next = tmp->next;
	/* set new_node->prev to tmp */
	new_node->prev = tmp;
	/* set tmp->next->prev to new_node */
	tmp->next->prev = new_node;
	/* set tmp->next to new_node */
	tmp->next = new_node;

	/* return new_node */
	return (new_node);
}
