#include "hash_tables.h"
/**
 * hash_table_print- prints a hash table
 * @ht: table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size = ht->size;
	unsigned long int i;
	hash_node_t *node;
	int printed = 0;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < size; i++)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				if (printed)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				printed = 1;
			}
		}
		printf("}\n");
	}
}
