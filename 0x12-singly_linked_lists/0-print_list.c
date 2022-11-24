#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t number_of_nodes = 0;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		while (h != NULL)
		{
			if (h->str == NULL)
			{
				printf("[0] (nil)\n");
			}
			else
			{
				printf("[%d] %s\n", h->len, h->str);
			}

			h = h->next;
			number_of_nodes++;
		}
	}

	return (number_of_nodes);
}
