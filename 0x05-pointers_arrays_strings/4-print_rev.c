#include"main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer to the string
 * Return: nothing
 */
void print_rev(char *s)
{
int i, j;

i = 0;

while (s[i] != '\0')
{
i++;
}
for (j = i - 1; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
