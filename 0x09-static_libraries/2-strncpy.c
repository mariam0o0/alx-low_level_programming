#include"main.h"
/**
 * *_strncpy - copies a string
 * @dest: pointer to the destination string
 * @src: pointer to source string
 * @n: bytes from src
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

i = 0;

while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}
for (; n > i; i++)
dest[i] = '\0';
return (dest);
}
