#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a
 * dlistint_t linked list
 * @head: pointer to head of list
 * @index: is the index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	/* let current point to the head of the list */
	dlistint_t *current = *head;
	/* a variable to keep track of the index */
	unsigned int counter = 0;
	/* if the list is empty, return -1 */
	if (current == NULL)
		return (-1);
	/* if the index is 0, delete the head node */
	if (index == 0)
	{
		/* let current point to the next node */
		*head = current->next;
		/* if the list has more than one node */
		if (current->next != NULL)
			/* let the previous node of the next node point to NULL */
			current->next->prev = NULL;
		/* free the memory of the head node */
		free(current);
		/* return 1 */
		return (1);
	}
	/* loop through the list until the index is reached */
	while (counter < index)
	{
		/* if the index is greater than the number of nodes */
		if (current == NULL)
			/* return -1 */
			return (-1);
		/* update current to point to the next node */
		current = current->next;
		/* increment the counter */
		counter++;
	}
	/* now delete the node at the index */
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
