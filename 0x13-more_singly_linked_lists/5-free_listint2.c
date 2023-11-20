#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the head of the list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp1, *temp2;

	temp1 = *head;
	while (temp1)
	{
		temp2 = temp1->next;
		free(temp1);
		temp1 = temp2;
	}
	*head = NULL;
}
