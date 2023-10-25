#include"main.h"
/**
 * _sqrt - evaluate from 1 to n
 * @x: n
 * @y: the number that iterates from 1 to n
 * Return: the root or -1
 */
int _sqrt(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	else
		return (_sqrt(x, y + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number given
 * Return: the natural square root of a number or -1
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
