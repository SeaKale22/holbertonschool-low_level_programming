#include "hash_tables.h"
/**
 * hash_table_get- finds value associated with a key
 * @ht: hash table to searh
 * @key: the key
 *
 * Return:value assocaited with element, or NULL of key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value;
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	if (node == NULL)
		return (NULL);
	value = node->value;
	return (value);
}
