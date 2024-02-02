#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			printf("'%s': '%s'", node->key, node->value);
			if (ht->array[i]->next)
			{
				print(", ")
				ht->array[i] = ht->array[i]->next
			}
		}
		print(", ")
	}
	printf("}\n");
}
