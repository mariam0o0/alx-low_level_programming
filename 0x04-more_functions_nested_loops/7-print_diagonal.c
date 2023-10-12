#include"main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times
 * Return: nothing
 */
void print_diagonal(int n)
{
int line, space;
if (n > 0)
{
for (line = 0; line < n; line++)
{
for (space = 0; space < line; space++)
_putchar(' ');
_putchar(92);

if (line == n - 1)
continue;
_putchar('\n');
}
}
_putchar('\n');
}
