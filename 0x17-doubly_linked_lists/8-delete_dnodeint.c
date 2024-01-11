#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: pointer to a pointer to the head
 * @index: index of the node to be deleted
 *
 * Return: 1 , -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i;

	if (!(*head))
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	while (i < index && current)
	{
		current = current->next;
		i++;
	}
	if (current)
		return (-1);
	temp = current->prev;
	temp->next = current->next;
	if (current->next)
		current->next->prev = temp;
	free(current);
	return (1);
}

