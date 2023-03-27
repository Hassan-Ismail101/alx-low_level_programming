#include "main.h"

/**
 * _strlen - calculate the length of string
 * @s: the pointer to string
 *
 * Return: the length of the string @s
 */

int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (*(s + counter) != '\0')
		counter++;
	return (counter);
}
