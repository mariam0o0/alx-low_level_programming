#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{	va_list args;
	char *s;
	int j;

	j = 0;
	va_start(args, format);
	while (format && format[j])
	{
	switch (format[j])
	{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			s = va_arg(args, char *);
			if (!s)
				printf("(nil)");
			else
				printf("%s", s);
			break;
		default:
			break;
	}
	if (format[j + 1]  && (format[j] == 'c' || format[j] == 'i' ||
				format[j] == 'f' || format[j] == 's'))
		printf(", ");
	j++;
	}
	printf("\n");
	va_end(args);
}
