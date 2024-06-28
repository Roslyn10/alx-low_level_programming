#include "hash_tables.h"

/**
 * hash_table_delete - A fuction that deletes a hash table
 * Description - Deletes a hash table
 * @ht: The hash table thats going to be deleted
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node, *temp;

	if (!ht)
	{
		return;
	}

	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node)
		{
			temp = node;
			node = node->next;
			if (temp->key)
				free(temp->key);
			if (temp->value)
				free(temp->value);
			if (temp)
				free(temp);
		}
	}

	free(ht->array);
	free(ht);
}
