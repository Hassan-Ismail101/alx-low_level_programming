#include "main.h"

/**
 * _strcmp - copy @n bytes from @src string to @dest
 * @s1: first number to comapred
 * @s2: second number to compared
 * Return: the difference between the two leters
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*(s1 + i) == *(s2 + i) && *(s1 + i) != '\0' && *(s2 + i) != '\0')
		i++;
	return (*(s1 + i) - *(s2 + i));
}
