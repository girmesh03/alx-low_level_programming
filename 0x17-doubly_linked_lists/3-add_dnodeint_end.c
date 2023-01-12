#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to head of list
 * @n: integer to be included in new node
 * Return: address of new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/* declare new node and temp node */
	dlistint_t *new, *temp;

	/* allocate memory for new node */
	new = malloc(sizeof(dlistint_t));
	/* if malloc fails, return NULL */
	if (new == NULL)
		return (NULL);

	/* assign n to new node */
	new->n = n;
	new->next = NULL;

	/* if head is NULL, new node is head */
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	/* temp node points to head */
	temp = *head;

	/* traverse list until temp->next is NULL */
	while (temp->next != NULL)
		temp = temp->next;

	/* temp->next is NULL, so new node is added to end of list */
	temp->next = new;
	new->prev = temp;

	/* return address of new node */
	return (new);
}
