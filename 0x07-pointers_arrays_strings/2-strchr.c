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
int i;

i = 0;

while (s[i] != '\0')
{
if (s[i] == c)
return (s + i);

i++;
}

return (NULL);
}
