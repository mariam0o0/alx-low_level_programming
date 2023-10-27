#include"main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: bytes in the initial segment of s which only has bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{

		for (j = 0; accept[j] != '\0'; j++)
		{

			if (s[i] == accept[j])
			{

				count++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			return (count);
		}
	}

	return (count);
}
