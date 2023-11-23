#include "main.h"
#include <stdio.h>
/**
 * flip_bits - returns no.of bits to get from number to another
 * @n: the first given number
 * @m: the second given number
 * Return: the number of bits needed to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m;

	unsigned int count = 0;

	while (num > 0)
	{
		count += num & 1;
		num >>= 1;
	}
	return (count);
}
