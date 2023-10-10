#include"main.h"
/**
 * print_last_digit - gives the last digit in a nuber
 * @n: the number given
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last *= -1;

	_putchar(last + '0');

	return (last);
}
