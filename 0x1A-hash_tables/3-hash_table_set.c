#include "hash_tables.h"

/**
 * hash_table_set - A function that adds an element to the hash table
 * Description - Adds an element to the hash table
 * @ht: The hash table that will be added to
 * @key: The key, and cannot be empty
 * @value: The Value associated with the key, must be duplicated...
 * ... and cant be empty
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (!ht || !key || !value)
	{
		return (0);
	}

	index = hash_djb2((const unsigned char *)key) % ht->size;
	new_node = malloc(sizeof(hash_node_t));

	if (!new_node)
	{
		return (0);
	}

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
