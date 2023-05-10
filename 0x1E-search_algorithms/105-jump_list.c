#include "search_algos.h"

/**
 * do_linear_search - searches for a value in a sorted list of integers using
 * the Linear search algorithm
 * @prev: pointer to the previous node
 * @value: value to search for
 * Return: pointer to the first node where value is located, or NULL if value
 * is not present in head or if head is NULL
 */

listint_t *do_linear_search(listint_t *prev, int value)
{
	/* loop through list */
	while (prev->n < value)
	{
		/* check if end of list is reached */
		if (prev->next == NULL)
			break;
		/* print value checked */
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		/* update prev */
		prev = prev->next;
	}

	/* check if value is found */
	printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
	if (prev->n == value)
		return (prev);

	/* if value not found, return NULL */
	return (NULL);
}

/**
 * jump_list - searches for a value in a sorted list of integers using the
 * Jump search algorithm
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in the list
 * @value: value to search for
 * Return: pointer to the first node where value is located, or NULL if value
 * is not present in head or if head is NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	/* declare variables */
	size_t jump, index;
	listint_t *current, *prev;

	/* check if list is NULL */
	if (list == NULL)
		return (NULL);

	/* initialize jump */
	jump = sqrt(size);
	current = list;
	prev = list;

	/* loop through list */
	while (current->n < value)
	{
		/* update prev */
		prev = current;
		/* update current */
		for (index = 0; index < jump; index++)
		{
			if (current->next == NULL)
				break;
			current = current->next;
		}
		/* check if value is found */
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n >= value)
			break;
		/* check if end of list is reached */
		if (current->next == NULL)
			break;
	}

	/* print value found */
	printf("Value found between indexes [%lu] and [%lu]\n",
		   prev->index, current->index);

	/* call linear search */
	return (do_linear_search(prev, value));
}
