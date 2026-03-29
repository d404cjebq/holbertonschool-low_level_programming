#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: pointer to the array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *array;
	int size;
	int i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min + i;

	return (array);
}
