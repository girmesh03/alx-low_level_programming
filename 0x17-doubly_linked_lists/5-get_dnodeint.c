#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to head of list
 * @index: index of node to return
 * Return: pointer to node at index, or NULL if node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	/* declare temp node */
	dlistint_t *temp;
	/* declare counter */
	unsigned int i;

	/* if head is NULL, return NULL */
	if (head == NULL)
		return (NULL);

	/* temp node points to head */
	temp = head;

	/* traverse list until index is reached */
	for (i = 0; i < index; i++)
	{
		/* if temp node is NULL, return NULL */
		if (temp == NULL)
			return (NULL);
		/* temp node points to next node */
		temp = temp->next;
	}

	/* return temp node */
	return (temp);
}
