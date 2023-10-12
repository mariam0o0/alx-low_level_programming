#include"main.h"

/**
 * _isupper - t checks for uppercase character
 * @c: the character
 * Return: 1 for upper or 0 for lower
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	if ((c >= 97) && (c <= 122))
		return (0);
}
