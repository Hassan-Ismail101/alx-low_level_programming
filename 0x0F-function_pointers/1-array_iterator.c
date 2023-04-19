#include "funciton_pointers.h"
/**
 * array_iterator - function to print elements of array
 * depend on the way of pointer of function
 * @array: the array to be printed
 * @size: the size of array
 * action: pointer of function to
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && size > 0)
	{
		size_t itr;

		for (itr = 0; itr < size; itr++)
			action(array[itr]);
	}
}
