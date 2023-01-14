#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a dlistint_t linked list
 * @head: pointer to head of list
 * Return: sum of all data (n) of a dlistint_t linked list
 */

int sum_dlistint(dlistint_t *head)
{
	/* let's declare temp pointer to head */
	dlistint_t *temp = head;

	/* let's declare a variable to store the sum */
	int sum = 0;

	/* let's check if the list is empty, if so return 0 */
	if (temp == NULL)
		return (0);

	/* let's traverse the list and add the data to sum */
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	/* let's return the sum */
	return (sum);
}
