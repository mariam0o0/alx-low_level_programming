#include"main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - creates a copy of the string given as a parameter
 * @str: the given string
 * Return:on success eturns a pointer to string or NULL on failure
 */

char *_strdup(char *str)
{
	int i;

	int size = 0;

	char *ptr;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		size++;
	ptr = malloc(size * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];
	return (ptr);
}
