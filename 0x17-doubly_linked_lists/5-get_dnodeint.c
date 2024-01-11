#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: pointer to the head of the list
 * @index: index of the node to retrieve
 *
 * Return: pointer to the nth node, or NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;

	int pos = 0;

	while (pos != index && temp)
	{
		temp = temp->next;
		pos++;
	}
	return (temp);
}
