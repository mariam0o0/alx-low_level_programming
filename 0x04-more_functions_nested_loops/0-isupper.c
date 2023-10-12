#include"main.h"

/**
 * _isupper - t checks for uppercase character
 * @c: the character
 * Return: 1 for upper or 0 for lower
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
