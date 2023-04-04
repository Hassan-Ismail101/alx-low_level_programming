#include "main.h"
/**
 * print_diagsums - return the summation of the two diagonal of array
 * @a: the 2D array
 * @size: the size of the 2D array
 */
void print_diagsums(int *a, int size)
{
	unsigned int diagonalItr;
	long long diagSum;
	unsigned int revDiagonalItr;
	long long revDiaSum;

	diagSum = 0;
	revDiaSum = 0;
	diagonalItr = 0;
	revDiagonalItr = size - 1;
	while (diagonalItr <= (size * size) - 1)
	{
		diagSum += *(a + diagonalItr);
		revDiaSum += *(a + revDiagonalItr);
		diagonalItr += (size + 1);
		revDiagonalItr += (size - 1);
	}
	printf("%lld, %lld\n", diagSum, revDiaSum);
}
