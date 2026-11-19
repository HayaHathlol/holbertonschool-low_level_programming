
#include "main.h"
#include <stdlib.h>
#include <stdint.h>

/**
 * array_range - Creates an array of integers
 * @min: Minimum value
 * @max: Maximum value
 *
 * Return: Pointer to the array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *arr;
	size_t count;
	size_t i;

	if (min > max)
		return (NULL);

	count = (size_t)((long long)max - (long long)min + 1);

	if (count > SIZE_MAX / sizeof(int))
		return (NULL);

	arr = malloc(count * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
		arr[i] = (int)((long long)min + (long long)i);

	return (arr);
}

