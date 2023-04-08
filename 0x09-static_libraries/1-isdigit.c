#include "main.h"

/**
 * _isdigit - check if the character is digit
 * @c: The character which checked
 * Return: 1 if @c is digit
 * and 0, if it other
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
