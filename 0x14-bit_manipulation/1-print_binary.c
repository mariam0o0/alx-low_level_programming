#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: the given number
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int position = sizeof(unsigned long int) * 8 - 1;

	int flag = 0;

	while (position >= 0)
	{
	if ((n >> position) & 1)
	{
		putchar('1');
		flag = 1;
	}
	else if (flag || position == 0)
		putchar('0');
	position--;
	}
}
