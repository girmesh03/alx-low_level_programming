#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table you want to look into
 * @key: key you are looking for
 * Return: value associated with the element, or NULL if key couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	/* declare index, which is the result of the hash function */
	unsigned long int index;
	/* declare tmp, which is a pointer to hash_node_t */
	hash_node_t *tmp;

	/* check if ht or key are NULL */
	/* if so, return NULL */
	if (ht == NULL || key == NULL)
		return (NULL);

	/* get the index of the key */
	/* use the hash function to get the index */
	index = key_index((const unsigned char *)key, ht->size);
	/* put the array at index into tmp */
	tmp = ht->array[index];

	/* loop through the linked list at index */
	while (tmp != NULL)
	{
		/* if the key matches, return the value */
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		/* if the key doesn't match, move to the next node */
		tmp = tmp->next;
	}

	/* if the key doesn't match, return NULL */
	return (NULL);
}
