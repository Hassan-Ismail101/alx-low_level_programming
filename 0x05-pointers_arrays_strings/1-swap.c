#include "main.h"

/**
 * swap_int - takes two integer values and swap them
 * @a: first integer value
 * @b: second integer value
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
