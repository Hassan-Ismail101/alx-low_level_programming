#include "main.h"
#include <stdlib.h>
/**
 * array_range - range an array in ascending order
 * @min: the lowest value
 * @max: the highest value
 * Return: pointer to the array after sorted
 */
int *array_range(int min, int max)
{
	int itr;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(max - min + 1);
	if (ptr == NULL)
		return (NULL);
	for (itr = min; itr <= max; itr++)
		*(ptr + itr - min) = itr;
	return (ptr);
}
