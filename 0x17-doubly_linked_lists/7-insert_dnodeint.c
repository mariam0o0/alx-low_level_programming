#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to a pointer to the head of the list
 * @idx: index where the new node should be added (starting at 0)
 * @n: data to be added to the new node
 *
 * Return: the new node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int pos;
	dlistint_t *new_node, *temp;

	if (idx == 0)
		return (add_dnodeint(h, n));
	temp = *h;
	pos = 0;
	while (pos != idx - 1 && temp)
	{
		temp = temp->next;
		pos++;
	}
	if (pos != idx - 1 && !temp)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = temp;
	if (temp->next)
		new_node->next = temp->next;
	else
		return (NULL);
	if (temp)
		temp->next = new_node;
	if (new_node->next)
		new_node->next->prev = new_node;
	return (new_node);
}
