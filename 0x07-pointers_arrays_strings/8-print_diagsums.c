#include"main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: array
 * @size: the size of the array
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
int i, d1, d2;

d1 = 0;
d2 = 0;

for (i = 0; i < size; i++)
{
d1 += a[i * size + i];
}

for (i = 0; i < size; i++)
{
d2 += a[i * size + (size - 1 - i)];
}

printf("%i, %i\n", d1, d2);
}
