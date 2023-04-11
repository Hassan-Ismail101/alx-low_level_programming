#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an dynamic array of size @size\
 * and assign @c to every byte
 * @size: the size of the array
 * @c: the value of every byte
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *temp;
	unsigned int itr;

	if (size == 0)
		return (NULL);
	temp = malloc(sizeof(char) * size);
	if (temp == NULL)
		return (NULL);
	for (itr = 0; itr < size; itr++)
		*(temp + itr) = c;
	return (temp);
}
