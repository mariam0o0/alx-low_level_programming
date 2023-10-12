#include"main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times
 * Return: nothing
 */
void print_diagonal(int n)
{
if (n > 0)
{
for (int line = 0; line < n; line++)
{
for (int space = 0; space < line; space++)
_putchar(' ');
_putchar(92);

if (line == n - 1)
continue;
_putchar('\n');
}
}
_putchar('\n');
}
