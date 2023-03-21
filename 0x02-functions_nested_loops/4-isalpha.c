#include "main.h"
/**
 * _isalpha - test is the letter an alphabetic
 * @c: The character to test
 *
 * Return: 1 if the letter is lower
 * On other case, 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
