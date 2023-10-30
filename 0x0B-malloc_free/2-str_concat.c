#include"main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @s1: the first given string
 * @s2: the secod given string
 * Return:on success eturns a pointer to string or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i;

	int size1 = 0;

	int size2 = 0;

	char *ptr;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		size1++;
	for (i = 0; s2[i] != '\0'; i++)
		size2++;
	ptr = malloc(sizeof(char) * (size1 + size2) + 1);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		ptr[size1 + i] = s2[i];
	return (ptr);
}
