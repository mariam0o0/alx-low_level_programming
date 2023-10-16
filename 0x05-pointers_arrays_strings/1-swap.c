#include"main.h"
/**
 * swap_int - function that swaps the values of two integers
 * @a: pointer to the first variable
 * @b: pointer to the second variable
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
int c;

c = *b;
*b = *a;
*a = c;
}
