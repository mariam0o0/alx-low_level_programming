#include<stdio.h>
#include"main.h"
/**
 * print_to_98 - print numbers
 * @n: the starting number
 * Return: doesn't return anything
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%i", n);
			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%i", n);
			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
