#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	/* declare a variable to count the number of nodes */
	size_t num_nodes = 0;
	/* current is a pointer to the head of the list */
	const dlistint_t *current = h;

	/* while current is not NULL, count the number of nodes, */
	/* and move to the next node */
	while (current != NULL)
	{
		current = current->next;
		num_nodes++;
	}
	/* return the number of nodes */
	return (num_nodes);
}
