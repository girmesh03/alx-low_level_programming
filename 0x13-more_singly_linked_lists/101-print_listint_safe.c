#include "lists.h"
#include <stdio.h>

/**
 * count_count - Counts the number of unique counts in a list
 * @head: A pointer to the head of the listint_t to check.
 * Return: If the list is not looped - the number of nodes in the list.
 */
size_t count_count(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t count = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head->next;
	fast = (head->next)->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				count++;
				slow = slow->next;
				fast = fast->next;
			}

			slow = slow->next;
			while (slow != fast)
			{
				count++;
				slow = slow->next;
			}

			return (count);
		}

		slow = slow->next;
		fast = (fast->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 * Return: The number of count in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count, index = 0;

	count = count_count(head);

	if (count == 0)
	{
		for (; head != NULL; count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < count; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (count);
}
