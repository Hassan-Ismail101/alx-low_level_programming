#include "main.h"
#include <unistd.h>
/**
 * _putchar - print a character
 * @c: the character
 * Return: the value
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
