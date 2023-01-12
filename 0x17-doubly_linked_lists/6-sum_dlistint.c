#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked list
 * @head: pointer to head of list
 * Return: sum of all data (n) of a dlistint_t linked list
 */

int sum_dlistint(dlistint_t *head)
{
	/* declare sum variable */
	int sum = 0;

	/* if head is NULL, return 0 */
	if (head == NULL)
		return (0);

	/* traverse list until head is NULL */
	while (head != NULL)
	{
		/* add n to sum */
		sum += head->n;
		/* head points to next node */
		head = head->next;
	}

	/* return sum */
	return (sum);
}
