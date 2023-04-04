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
	long long revDiaSum;

	diagSum = 0;
	revDiaSum = 0;
	diagonalItr = 0;
	while (diagonalItr < size)
	{
		diagSum += *(a + diagonalItr);
		revDiaSum += *(a + size - 1 - diagonalItr);
		a += size;
		diagonalItr++;
	}
	printf("%lld, %lld\n", diagSum, revDiaSum);
}
