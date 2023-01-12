#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head of list
 * @idx: index of the list where the new node should be added
 * @n: data for new node
 * Return: address of new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	/* declare temp node */
	dlistint_t *temp;
	/* declare new node */
	dlistint_t *new;
	/* declare counter */
	unsigned int i;

	/* if head is NULL, return NULL */
	if (h == NULL)
		return (NULL);

	/* temp node points to head */
	temp = *h;

	/* traverse list until index is reached */
	for (i = 0; i < idx; i++)
	{
		/* if temp node is NULL, return NULL */
		if (temp == NULL)
			return (NULL);
		/* temp node points to next node */
		temp = temp->next;
	}

	/* allocate memory for new node */
	new = malloc(sizeof(dlistint_t));
	/* if malloc fails, return NULL */
	if (new == NULL)
		return (NULL);

	/* set new node's data */
	new->n = n;
	/* set new node's next pointer */
	new->next = temp;
	/* set new node's prev pointer */
	new->prev = temp->prev;
	/* set temp node's prev pointer */
	temp->prev = new;
	/* set temp node's prev pointer's next pointer */
	new->prev->next = new;

	/* return new node */
	return (new);
}
