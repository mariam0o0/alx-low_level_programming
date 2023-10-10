#include"main.h"
/**
 * print_sign - print the sign of the number
 * @n: the number to be examined
 * Return: 1 if it is positive 0 if it is zero and -1 if it is negative
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	_putchar('0');
	return (0);
}
