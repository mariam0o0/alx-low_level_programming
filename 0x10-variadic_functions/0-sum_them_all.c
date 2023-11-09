#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum of all its parameters
 * @n: the number of the arguments
 * Return: 0 or returns the sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	int i;
	int sum = 0;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(args, int);
	printf("%d\n", sum);
	va_end(args);
}
