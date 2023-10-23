#include"main.h"
#include <stddef.h>
/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: a pointer to the byte that matches accept or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
	}
	return (NULL);
}

