#include "hash_tables.h"

/**
 * hash_tables_set - A function that adds an element to the hash table
 * Description - Adds an element to the hash table
 * @ht: The hash table that will be added to
 * @key: The key, and cannot be empty
 * @value: The Value associated with the key, must be duplicated...
 * ... and cant be empty
 * Returns: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
