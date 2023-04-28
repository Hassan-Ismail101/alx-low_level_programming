#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - create 2D array
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
	ptr = (int **)malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);
	for (itr1D = 0; itr1D < height; itr1D++)
	{
		*(ptr + itr1D) = (int *)malloc(sizeof(int) * width);
		if (*(ptr + itr1D) == NULL)
		{
			while (itr1D > -1)
				free(*(ptr + itr1D--));
			free(ptr);
			return (NULL);
		}
	}
	if (ptr == NULL)
		return (NULL);
	for (itr1D = 0; itr1D < height; itr1D++)
		for (itr2D = 0; itr2D < width; itr2D++)
			ptr[itr1D][itr2D] = 0;
	return (ptr);
}
