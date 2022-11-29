#include "lists.h"
#include <stdio.h>

size_t count_node(const listint_t *head);

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0, len = 0;
	const listint_t *temp;

	if (head == NULL)
		return (0);

	len = count_node(head);

	if (len == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			i++;
		}
	}
	else
	{
		temp = head;
		while (len != 0)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			temp = temp->next;
			len--;
			i++;
		}
		printf("-> [%p] %d\n", (void *)temp, temp->n);
		i++;
	}

	return (i);
}

/**
 * count_node - counts the number of nodes in a listint_t list.
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t count_node(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t len = 0;

	if (head == NULL)
		return (0);

	slow = head;
	fast = head->next;

	while (fast != NULL && fast->next != NULL)
	{
		if (slow == fast)
		{
			len = 1;
			break;
		}
		slow = slow->next;
		fast = fast->next->next;
	}

	if (len == 1)
	{
		slow = slow->next;
		while (slow != fast)
		{
			slow = slow->next;
			len++;
		}
	}

	return (len);
}
