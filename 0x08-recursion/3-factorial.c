#include"main.h"
/**
 * factorial - function that returns the factorial of a number
 * @n: the number given
 * Return: -1 or the factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
