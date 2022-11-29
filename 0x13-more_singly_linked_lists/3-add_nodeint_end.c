#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the head of the list
 * @n: integer to be added to the list
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *previous, *current;

	previous = *head;
	current = malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);

	current->n = n;
	current->next = NULL;

	if (*head == NULL)
	{
		*head = current;
		return (current);
	}

	while (previous->next != NULL)
		previous = previous->next;

	previous->next = current;

	return (current);
}
