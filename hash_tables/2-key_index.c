#include "hash_tables.h"
/**
 * key_index- gives index of a key
 * @key: the key
 * @size: Size of the array of the hash table
 *
 * Retun: index where key/value pair is stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_code;
	unsigned long int index;

	hash_code = hash_djb2(key);
	index = hash_code % size;
	return (index);
}

