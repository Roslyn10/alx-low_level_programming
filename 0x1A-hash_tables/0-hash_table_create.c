#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table
 * Description - Creates a hash table
 * @size: Is the size of the array
 * Return: A pointer to the newly created hash table/ NULL if failed
 * Null is something went wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (!table)
	{
		return (NULL);
	}

	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t *));
	if (!table->array)
	{
		free(table);
		return (NULL);
	}

	return (table);
}

