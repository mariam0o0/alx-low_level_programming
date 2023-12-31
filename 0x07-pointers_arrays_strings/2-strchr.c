#include"main.h"
#include <stddef.h>
/**
 * *_strchr - function that locates a character in a string
 * @s: string to be scanned
 * @c: the character
 * Return: a pointer to the first occurrence of the character or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
