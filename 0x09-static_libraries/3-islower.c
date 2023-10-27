#include"main.h"
/**
 * _islower - sheck if the character is lower case
 * @c: the character to be checked
 * Return: 1 if it is a lower case or 0 otherwise
 */
int _islower(int c)
	{
		if (c >= 97 && c <= 122)
			return (1);
		return (0);
	}
