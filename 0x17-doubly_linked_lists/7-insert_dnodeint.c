#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head of list
 * @idx: is the index of the list where the new node should be added.
 * Index starts at 0
 * @n: data for new node
 * Return: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	/* declare variables */
	dlistint_t *new_node, *temp;
	unsigned int i;

	/* if head is NULL, return NULL */
	if (h == NULL)
		return (NULL);

	/* allocate memory for new node */
	new_node = malloc(sizeof(dlistint_t));
	/* if malloc fails, return NULL */
	if (new_node == NULL)
		return (NULL);

	/* set new_node->n to n */
	new_node->n = n;
	/* set new_node->next to NULL */
	new_node->next = NULL;
	/* set new_node->prev to NULL */
	new_node->prev = NULL;

	/* if idx is 0, add new node at beginning of list */
	if (idx == 0)
	{
		/* if head is NULL, set new_node->next to NULL */
		if (*h == NULL)
			new_node->next = NULL;
		/* else, set new_node->next to head */
		else
			new_node->next = *h;
		/* set head to new_node */
		*h = new_node;
		/* return new_node */
		return (new_node);
	}

	/* set temp to head */
	temp = *h;
	/* traverse list until temp is NULL */
	for (i = 0; temp != NULL; i++)
	{
		/* if i is equal to idx, insert new node */
		if (i == idx)
		{
			/* set new_node->next to temp */
			new_node->next = temp;
			/* set new_node->prev to temp->prev */
			new_node->prev = temp->prev;
			/* set temp->prev->next to new_node */
			temp->prev->next = new_node;
			/* set temp->prev to new_node */
			temp->prev = new_node;
			/* return new_node */
			return (new_node);
		}
		/* temp points to next node */
		temp = temp->next;
	}

	/* if i is not equal to idx, return NULL */
	if (i != idx)
		return (NULL);

	/* return new_node */
	return (new_node);
}
