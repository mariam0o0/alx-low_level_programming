#include "lists.h"
/**
 * add_nodeint_end -  adds a new node at the end of a list
 * @head: pointer to the head of the list
 * @n: the passed integer
 * Return: the address of the new element, or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *tail;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	tail = *head;
	while (tail->next)
		tail = tail->next;
	tail->next = newnode;

	return (newnode);
}
