#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 * Return: first index where value is or -1 if not found.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
