#include"main.h"
/**
 * print_square -  prints a square, followed by a new line
 * @size: the size of the square
 * Return: nothing
 */
void print_square(int size)
{
for (int v = 0; v < size; v++)
{
for (int h = 0; h < size; h++)
_putchar('#');
_putchar('\n');
}
}
