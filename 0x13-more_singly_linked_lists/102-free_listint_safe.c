#include "lists.h"

/**
 * list_node_counter - counts the number of nodes in a linked list
 * @head: pointer to the head of the list
 * Return: number of nodes
 */
size_t list_node_counter(const listint_t *head)
{
	const listint_t *left, *right;
	size_t node_counter = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	left = head->next;
	right = (head->next)->next;

	while (right)
	{
		if (left == right)
		{
			left = head;
			while (left != right)
			{
				node_counter++;
				left = left->next;
				right = right->next;
			}

			left = left->next;
			while (left != right)
			{
				node_counter++;
				left = left->next;
			}

			return (node_counter);
		}

		left = left->next;
		right = (right->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to the head of the list
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_counter, i = 0;
	listint_t *current;

	node_counter = list_node_counter(*h);

	if (node_counter == 0)
	{
		for (i = 0; *h != NULL; i++)
		{
			current = *h;
			*h = (*h)->next;
			free(current);
		}
	}
	else
	{
		for (i = 0; i < node_counter; i++)
		{
			current = *h;
			*h = (*h)->next;
			free(current);
		}
		*h = NULL;
	}

	return (i);
}
