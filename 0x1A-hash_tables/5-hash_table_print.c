#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int first_pair = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			if (!first_pair)
				printf(", ");

			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			first_pair = 0;
			ht->array[i] = ht->array[i]->next;
		}
	}
	printf("}\n");
}
