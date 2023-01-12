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
	/* declare temp pointer and set to head */
	dlistint_t *tmp = *head;
	/* if head is NULL, return -1 */
	if (*head == NULL)
		return (-1);
	/* traverse list until index is 0 */
	for (; index > 0; index--)
	{
		/* if tmp is NULL, return -1 */
		if (tmp == NULL)
			return (-1);
		/* tmp points to next node */
		tmp = tmp->next;
	}
	/* if tmp is head, set head to tmp->next */
	if (tmp == *head)
	{
		/* if tmp->next is NULL, set head to NULL */
		*head = tmp->next;
		/* if tmp->next is not NULL, set tmp->next->prev to NULL */
		if (tmp->next != NULL)
			/* set tmp->next->prev to NULL */
			tmp->next->prev = NULL;
	}
	else
	{
		/* if tmp->next is NULL, set tmp->prev->next to NULL */
		tmp->prev->next = tmp->next;
		/* if tmp->next is not NULL, set tmp->next->prev to tmp->prev */
		if (tmp->next != NULL)
			/* set tmp->next->prev to tmp->prev */
			tmp->next->prev = tmp->prev;
	}
	/* free tmp */
	free(tmp);
	/* return 1 */
	return (1);
}
