#include "main.h"

/**
 * _isupper - check if the character is upper case
 * @c: The character which checked
 * Return: 1 if @c is upper case
 * and 0, if it other
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
