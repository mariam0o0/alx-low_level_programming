#include"main.h"
/**
 * print_alphabet_x10 - print the alphabet for ten times
 *
 * Return: void
 */
void print_alphabet_x10(void)
	{
		int x;
		char ch;

		for (x = 0 ; x < 9 ; x++)
		{
			for (ch = 'a' ; ch <= 'z' ; ch++)
				_putchar(ch);
			_putchar('\n');
		}
	}
