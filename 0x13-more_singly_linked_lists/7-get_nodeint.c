#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: pointer to the head of the list
 * @index: index of the node, starting at 0
 * Return: pointer to the nth node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	listint_t *temp = head;

	while (temp)
	{
		if (count == index)
			return (temp);

		count++;
		temp = temp->next;
	}

	return (NULL);
}
