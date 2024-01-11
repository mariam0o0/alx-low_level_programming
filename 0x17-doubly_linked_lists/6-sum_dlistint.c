#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data of a linked list
 * @head: pointer to the head of the list
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

