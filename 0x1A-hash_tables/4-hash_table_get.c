#include "hash_tables.h"
/**
 * hash_table_get - Retrieve the value associated with a key.
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 * Return: the value on success and NULL otherwise.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{

	unsigned long int index;
	hash_node_t *item;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	item = ht->array[index];

	while (item != NULL && strcmp(item->key, key) != 0)
		item = item->next;

	if (item == NULL)
		return (NULL);
	else
		return (item->value);

}
