#include"main.h"

/**
 * more_numbers - prints 10 times the numbers
 *
 * Return: nothing
 */

void more_numbers(void)
{
for (int x = 0; x <= 9; x++)
{
for (int y = 0; y <= 14; y++)
{
if (y > 9)
_putchar((y / 10) + '0');
_putchar((y % 10) + '0');
}
_putchar('\n');
}
}
