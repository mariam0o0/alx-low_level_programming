#include"main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: lenght of the line
 * Return: nothing
 */
void print_line(int n)
{
if (n > 0)
{
for (int line = 0; line < n; line++)
_putchar('_');
}
_putchar('\n');
}
