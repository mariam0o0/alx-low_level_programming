#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets a bit to 0 at a given index
 * @n: pointer to the given number
 * @index: the index, starting from 0
 * Return: 1 if it worked or -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n & (~(1 << index));
	return (1);
}
