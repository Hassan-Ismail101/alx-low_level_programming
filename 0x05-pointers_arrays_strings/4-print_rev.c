#include "main.h"

/**
 * print_rev - function to print string on revered order
 * @s: pointer to the string which will be printed
 */

void print_rev(char *s)
{
	int counter;

	counter = 0;
	while (*(str + counter) != '\0')
		counter++;
	while (counter--)
		_putchar(*(str + counter));
	_putchar('\n');
}
