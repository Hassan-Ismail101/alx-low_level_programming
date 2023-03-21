#include "main.h"
/**
 * _islower - test is the letter a lowercase
 * @c: The character to test
 *
 * Return: 1 if the letter is lower
 * On other case, 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
