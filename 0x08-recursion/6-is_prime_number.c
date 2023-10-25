#include"main.h"

/**
 * prime - evaluate from 1 to n
 * @x: n
 * @y: the number that iterates from 1 to n
 * Return: 1 on success or -1 on error
 */
int prime(int x, int y)
{
	if (x == y)
		return (1);
	else if (x % y == 0)
		return (0);
	else
		return (prime(x, y + 1));
}

/**
 * is_prime_number - cheks if if the input integer is a prime number
 * @n: the number given
 * Return: 1 if it is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}
