#include "hash_tables.h"

/**
 * hash_table_get - A function that retrieves a value associated with a key
 * Description - Retrieves a value associated with a key
 * @ht: The hash table that will be looked into
 * @key: The key that is being looked for
 * Return: NULL if key couldnt be found or the value associated with element
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht || !key)
	{
		return (NULL);
	}

	index = hash_djb2((const unsigned char *)key) % ht->size;
	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}

	return (NULL);
}
				
