#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the head of the list
 * Return: the address of the node
 * where the loop starts, or NULL if there is no
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *left, *right;

	if (head == NULL || head->next == NULL)
		return (NULL);

	left = head->next;
	right = (head->next)->next;

	while (right)
	{
		if (left == right)
		{
			left = head;
			while (left != right)
			{
				left = left->next;
				right = right->next;
			}
			return (left);
		}

		left = left->next;
		right = (right->next)->next;
	}

	return (NULL);
}
