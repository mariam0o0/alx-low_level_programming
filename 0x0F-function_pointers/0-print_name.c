#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name -  prints a name
 * @name: char string
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
