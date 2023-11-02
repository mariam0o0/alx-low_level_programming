#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range -  reates an array of integers
 * @min: smallest integer in the array
 * @max: largest integer in the array
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}
