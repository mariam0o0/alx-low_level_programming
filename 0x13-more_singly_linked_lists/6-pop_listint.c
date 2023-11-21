#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the head of the list
 * Return: the head node’s data n or 0 if empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	temp->next = NULL;
	free(temp);

	return (data);
}
