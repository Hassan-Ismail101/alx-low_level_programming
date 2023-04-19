#include "function_pointers.h"
/**
 * int_index - function to chech the elments of array
 * depend on the way of pointer of function
 * @array: the array to be printed
 * @size: the size of array
 * @cmp: pointer of function to
 * Return: True if on element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int itr;

	for (itr = 0; itr < size; itr++)
	{
		if (cmp(array[itr]))
			return (itr);
	}
	return (-1);
}
