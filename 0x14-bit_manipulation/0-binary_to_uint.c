#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int cnum = 0;

	char bit;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
	bit = *b++;
	if (bit != '0' && bit != '1')
	return (0);
	cnum = (cnum << 1) | (bit - '0');
	}

	return (cnum);
}
