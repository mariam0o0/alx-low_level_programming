#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line
 * @n: the number of integers passed to the function
 * Return: nothing
 */

#include <stdio.h>
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			x = va_arg(args, int);
			printf("%d", x);
		}
		printf("\n");
	}

	else
	{
		for (i = 0; i < n; i++)
		{
			x = va_arg(args, int);
			printf("%d", x);
			if (i < n - 1)
				printf("%s", separator);
		}
		printf("\n");
	}

	va_end(args);
}
