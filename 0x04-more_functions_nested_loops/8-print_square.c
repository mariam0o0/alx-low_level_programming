#include"main.h"
/**
 * print_square -  prints a square, followed by a new line
 * @size: the size of the square
 * Return: nothing
 */
void print_square(int size)
{
int h, v;

if (size > 0)
{
for (h = 0; h < size; h++)
{
for (v = 0; v < size; v++)
_putchar('#');
if (h == size - 1)
continue;
_putchar('\n');
}
}
_putchar('\n');
}
