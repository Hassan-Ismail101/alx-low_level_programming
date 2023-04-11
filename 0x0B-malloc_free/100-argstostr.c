#include "main.h"
#include <stdlib.h>
/**
 * _strlen - calculate the length of string @s
 * @s: the string
 * Return: the length of string @s
 */
int _strlen(char *s)
{
	int itr;

	if (s == NULL)
		return (0);
	itr = 0;
	while (*(s + itr) != '\0')
		itr++;
	return (itr);
}
/**
 * argstostr - converts @av to  string
 * @ac: number of arguments
 * @av: vector of arguments
 * Return: pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	int size;
	int itr1;
	int itr2;
	char *ptr;

	if (av == NULL || ac == 0)
		return (NULL);
	size = 0;
	for (itr1 = 0; itr1 < ac; itr1++)
		size += _strlen(av[itr1]);
	ptr = malloc(sizeof(char) * (size + 1 + ac));
	if (ptr == NULL)
		return (NULL);
	itr1 = 0;
	for (itr2 = 0; itr2 < ac; itr2++)
	{
		while (*av[itr2] != '\0')
		{
			*(ptr + itr1++) = *(av[itr2]++);
		}
		*(ptr + itr1++) = '\n';
	}
	*(ptr + itr1) = '\0';
	return (ptr);
}
