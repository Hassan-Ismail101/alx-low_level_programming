#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - 
 * @width: 1D size
 * @height: 2D size
 * Return: pointer of 2D array
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int itr1D;
	int itr2D;
	if (width <= 0 || height <= 0)
		return (NULL);

	itr1D = 0;
	itr2D = 0;
	ptr = (int **)malloc(sizeof(int*) * height);
	if (ptr == NULL)
		return (NULL);
	for (itr1D = 0; itr1D < width; itr1D++)
		*(ptr + itr1D) = malloc(sizeof(int) * height);
	for (itr1D = 0; itr1D < width; itr1D++)
		for (itr2D = 0; itr2D < height; itr2D++)
			ptr[itr1D][itr2D] = 0;
	return (ptr);
}
