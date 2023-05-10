#include "search_algos.h"

/**
 * do_linear_search - searches for a value in a sorted list of integers using
 * the Linear search algorithm
 * @prev: pointer to the previous node
 * @value: value to search for
 * Return: pointer to the first node where value is located, or NULL if value
 * is not present in head or if head is NULL
 */

skiplist_t *do_linear_search(skiplist_t *prev, int value)
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
 * linear_skip - Searches for a value in a sorted skip list of integers using
 * @list: Pointer to the head of the skip list to search in
 * @value: Value to search for
 * Return: Pointer to the first node where value is located, or NULL on failure
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	/* declare variables */
	skiplist_t *current, *jump;

	/* check if list is NULL */
	if (list == NULL)
		return (NULL);

	/* initialize current, jump */
	current = jump = list;

	/* loop through list */
	while (jump->next != NULL && jump->n < value)
	{
		/* update current */
		current = jump;
		/* update jump */
		if (jump->express != NULL)
		{
			jump = jump->express;
			/* print value checked */
			printf("Value checked at index [%lu] = [%d]\n", jump->index, jump->n);
		}
		else
		{
			while (jump->next != NULL)
				jump = jump->next;
		}
	}

	/* print value found */
	printf("Value found between indexes [%lu] and [%lu]\n",
		   current->index, jump->index);

	/* call do_linear_search */
	return (do_linear_search(current, value));
}
