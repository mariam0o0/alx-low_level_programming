#include "hash_tables.h"
/**
 * key_index - Get the index at which a key/value
 *      pair should be stored in a hash table.
 * @key: The key to get the index of.
 * @size: The size of the array of the hash table.
 * Return: The index of the key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
