#include"main.h"
#include<stdio.h>
/**
 * print_array - prints half of a string
 * @a: the array
 * @n: the number of elements of the array to be printed
 * Return: nothing
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
if (i == 0)
printf("%d", a[i]);
else
printf(", %d", a[i]);
}
printf("\n");
}
