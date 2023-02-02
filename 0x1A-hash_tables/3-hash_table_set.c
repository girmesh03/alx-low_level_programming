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
	/* declare a variable to store the index of the key/value pair */
	unsigned long int index;
	/* declare a pointer to the hash node */
	hash_node_t *new_node = NULL;

	/* if the hash table is NULL or the key is NULL or the value is NULL */
	/* return 0 */
	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	/* get the index of the key/value pair */
	/* use key_index function to get the index */
	index = key_index((const unsigned char *)key, ht->size);

	/* if the key already exists */
	/* update the value of the key */
	/* return 1 */
	if (ht->array[index] != NULL)
	{
		ht->array[index]->value = strdup(value);
		return (1);
	}

	/* allocate memory for the new hash node */
	/* if malloc fails, return 0 */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	/* set the key of the new hash node */
	new_node->key = strdup(key);
	/* set the value of the new hash node */
	new_node->value = strdup(value);
	/* set the next pointer of the new hash node */
	new_node->next = ht->array[index];

	/* set the new hash node to the array of the hash table */
	ht->array[index] = new_node;

	/* return 1 */
	return (1);
}
