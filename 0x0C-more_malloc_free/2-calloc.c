#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc -  allocates memory for an array, using malloc
 * @nmemb: no. of elements of the array
 * @size: size of element in byte
 * Return: a pointer to array or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = calloc(nmemb, size);

	if (ptr == NULL)
		return (NULL);

	else
		return (ptr);
}
