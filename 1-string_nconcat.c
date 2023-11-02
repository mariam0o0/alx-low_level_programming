#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat -  concatenates two strings
 * @s1: pointer to the first string
 * @s2:pointer to the second sting
 * @n: no. of bytes added to s1 from s2
 * Return: a pointer to the concatenated string or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	char *ptr;
	int len1 = 0;
	int len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;

	ptr = malloc(sizeof(char) * (len1 + n) + 1);
	if (ptr == NULL)
		return (NULL);

	if (n >= len2)
	{
		for (i = 0; s1[i] != '\0'; i++)
			ptr[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			ptr[len1 + i] = s2[i];
		ptr[len1 + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			ptr[i] = s1[i];
		for (i = 0; i < n; i++)
			ptr[len1 + i] = s2[i];
		ptr[len1 + i] = '\0';
	}
	return (ptr);
}
