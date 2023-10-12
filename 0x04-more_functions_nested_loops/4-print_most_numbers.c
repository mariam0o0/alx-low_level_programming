#include"main.h"

/**
 * print_most_numbers - prints the numbers
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
for (int x = '0'; x <= '9'; x++)
{
if ((x != '2') && (x != '4'))
_putchar(x);
else
continue;
}
_putchar ('\n');
}
