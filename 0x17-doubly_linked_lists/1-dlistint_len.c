#include "lists.h"

/**
 * dlistint_len - find the length of the linked list
 * @h: pointer to the head of the list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
