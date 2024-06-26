#include "hash_tables.h"

/**
 * key_index - A function that gives you the index of a key
 * Description - Gives you the index of a key
 * @key: The key
 * @size: The size of the array of the hash table
 * Return: The key/value pair at index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);

	return (index % size);
}
