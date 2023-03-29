#include "main.h"

/**
 * reverse_array - used to reverse an array
 * @a: the pointer to that array
 * @n: the number of elements in the array
 */

void reverse_array(int *a, int n)
{
	if (n > 1)
	{
		int itr;
		int temp;

		itr = 0;
		for (itr = 0; itr <= (n - 1) / 2; itr++)
		{
			temp = *(a + itr);
			*(a + itr) = *(a + (n - 1) - itr);
			*(a + (n - 1) - itr) = temp;
		}
	}
}
