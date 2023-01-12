#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to head of list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	/* declare temp node */
	dlistint_t *temp;

	/* if head is NULL, return */
	if (head == NULL)
		return;

	/* traverse list until head is NULL */
	while (head != NULL)
	{
		/* temp node points to head */
		temp = head;
		/* head points to next node */
		head = head->next;
		/* free temp node */
		free(temp);
	}
}
