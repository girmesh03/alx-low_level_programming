#include "lists.h"
#include <string.h>

int _strlen(const char *s);

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head of the list
 * @str: string needs to be duplicated
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = new_node;
	}
	else
	{
		last_node = (*head);
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}

	return (new_node);
}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of a string
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
