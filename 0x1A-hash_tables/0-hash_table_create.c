#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	/* declare a pointer to the new hash table */
	hash_table_t *new_table = NULL;

	/* allocate memory for the new hash table */
	/* if malloc fails, return NULL */
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	/* set the size of the new hash table */
	new_table->size = size;
	/* allocate memory for the array of the new hash table */
	/* if calloc fails, free the memory allocated for the new hash table */
	/* new_table->array = calloc(size, sizeof(hash_node_t *)); */
	new_table->array = malloc(size * sizeof(hash_node_t *));
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	/* return the pointer to the new hash table */
	return (new_table);
}
