#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line
 * @n: the number of integers passed to the function
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (!separator)
	{
		for (i = 0; i < n; i++)
			printf("%d", va_arg(args, int));
		printf("\n");
	}

	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));
			if (i < n - 1)
				printf("%s", separator);
		}
		printf("\n");
	}

	va_end(args);
}
