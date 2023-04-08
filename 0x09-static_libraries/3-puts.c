#include "main.h"

/**
 * _puts - function to print string on screen
 * @str: pointer to the string which will be printed
 */

void _puts(char *str)
{
	int counter;

	counter = 0;
	while (*(str + counter) != '\0')
		_putchar(*(str + counter++));
	_putchar('\n');
}
