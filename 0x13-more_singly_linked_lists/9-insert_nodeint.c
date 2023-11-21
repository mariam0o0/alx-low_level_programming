#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head of the list
 * @idx: index where the new node should be added
 * @n: data of the new node
 * Return: the sum of data or 0 if empty
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp, *prev;

	unsigned int pos = 0;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	temp = *head;
	prev = NULL;


	while (temp != NULL && pos < idx)
	{
		prev = temp;
		temp = temp->next;
		pos++;
	}


	if (pos < idx)
	{
		free(newnode);
		return (NULL);
	}

	if (prev == NULL)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		newnode->next = temp;
		prev->next = newnode;
	}

	return (newnode);
}
