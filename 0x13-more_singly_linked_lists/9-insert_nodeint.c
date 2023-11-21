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
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	temp = *head;
	idx--;
	while (idx)
	{
		temp = temp->next;
		idx--;
	}
	newnode->next = temp->next;
	temp->next = newnode;

	return (newnode);
}
