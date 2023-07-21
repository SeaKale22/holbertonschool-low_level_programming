#include "hash_tables.h"
/**
 * hash_table_set- adds element to hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 if successful, else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;
	hash_node_t *head;

	if (ht == NULL || key == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];
	while (head != NULL)
	{
		if (strcmp(head->key, key) == 0)
		{
			free(head->value);
			head->value = strdup(value);
			if (head->value == NULL)
				return (0);
			return (1);
		}
		head = head->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
