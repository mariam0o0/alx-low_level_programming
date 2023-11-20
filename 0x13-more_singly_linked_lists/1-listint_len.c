#include "lists.h"
/**
 * listint_len - return the no. of elements in a linked list
 * @h: pointer to the head of the list
 * Return: the number of elements in a list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{

		h = h->next;
		count++;
	}
	return (count);
}
