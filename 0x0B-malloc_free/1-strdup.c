#include "main.h"
#include <stdlib.h>
/**
 * _strdup - create an array of chars and stores the char of @str
 * @str: the string that will be assigned to the dynamic array
 * Return: pointer to the dynamic array
 */
char *_strdup(char *str)
{
	int itr;
	char *ptr;

	if (str == NULL)
		return (NULL);
	itr = 0;
	while (*(str + itr) != '\0')
		itr++;
	ptr = malloc(sizeof(char) * (itr + 1));
	if (ptr == NULL)
		return (NULL);
	itr = 0;
	while (*str != '\0')
		*(ptr + itr++) = *(str++);
	*(ptr + itr) = *str;
	return (ptr);
}
