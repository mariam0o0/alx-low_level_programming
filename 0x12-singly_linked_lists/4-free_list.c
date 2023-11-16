#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *temp1, *temp2;

	temp1 = head;

	while (temp1 != NULL)
	{
		next = temp1->next;
		free(temp1->str);
		free(temp1);
		current = temp2;
	}
}
