#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to the head of the list
 * @index: index of the node that should be deleted
 * Return: the address of the new node or NULL if the operation fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *temp = *head;
	unsigned int pos;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (pos = 0; pos < index - 1 && temp != NULL; pos++)
		temp = temp->next;

	if (temp == NULL || temp->next == NULL)
		return (-1);

	current = temp->next;
	temp->next = temp->next->next;
	current->next = NULL;
	free(current);

	return (1);
}
