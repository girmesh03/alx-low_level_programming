#include "lists.h"

/**
 * add_dnodeint - adds a new_node at the beginning of a dlistint_t list
 * @head: double pointer to the head of the list
 * @n: integer to be added to the new_node element
 * Return: address of the new_node element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* declare a new_node pointer */
	dlistint_t *new_node;

	/* allocate memory for new_node */
	new_node = malloc(sizeof(dlistint_t));
	/* if malloc fails, return NULL */
	if (new_node == NULL)
		return (NULL);

	/* assign n to new_node->n */
	new_node->n = n;
	/* assign NULL to new_node->prev */
	new_node->prev = NULL;
	/* assign *head to new_node->next */
	new_node->next = *head;

	/* if *head is not NULL, assign new_node to (*head)->prev */
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
