#include "hash_tables.h"

/**
 * hash_table_print - A function that prints a hash table
 * Description - Prints a hash table
 * @ht: The hash table
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temp;
	int c = 0;

	if (!ht)
		return;

	index = 0;
	printf("{");
	while (index < ht->size)
	{
		while (ht->array[index])
		{
			temp = ht->array[index];
			while (temp)
			{
				if (c)
					printf(",");
				printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
				c = 1;
			}
			break;
		}
		index++;
	}
	printf("}\n");
}
