#include "hash_tables.h"

unsigned long int hash_djb2(const unsigned char *str);

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: key
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/* declare new_node and tmp, which are pointers to hash_node_t */
	hash_node_t *new_node;
	hash_node_t *tmp;
	/* declare index, which is the result of the hash function */
	unsigned long int index;

	/* check if ht, key, or value are NULL */
	/* if so, return 0 */
	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	/* get the index of the key */
	/* use the hash function to get the index */
	index = hash_djb2((const unsigned char *)key) % ht->size;
	/* put the array at index into tmp */
	tmp = ht->array[index];

	/* loop through the linked list at index */
	while (tmp != NULL)
	{
		/* if the key matches, free the value and update it */
		/* and return 1 */
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		/* if the key doesn't match, move to the next node */
		tmp = tmp->next;
	}

	/* if the key doesn't match, add a new node */
	/* allocate memory for the new node */
	/* if malloc fails, return 0 */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	/* add the key and value to the new node */
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	/* return 1 */
	return (1);
}
