#include "lists.h"
/**
 * sum_listint - returns the sum of all the data of a list
 * @head: pointer to the head of the list
 * Return: the sum of data or 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum;

	listint_t *temp = head;

	if (head == NULL)
		return (0);

	while (temp)
	{
		sum = sum + (temp->n);
		temp = temp->next;
	}

	return (sum);
}
