#include "main.h"

/**
 * puts_half - function used to print the last half of string
 * @str: pointer to the string
 */

void puts_half(char *str)
{
	int len;
	int counter;

	len = 0;
	while (*(str + len) != '\0')
		len++;
	if (len % 2 == 0)
	{
		for (counter = (len / 2); counter < len; counter++)
			_putchar(*(str + counter));
	}
	else
	{
		for (counter = (len / 2) + 1; counter < len; counter++)
			_putchar(*(str + counter));
	}
	_putchar('\n');
}
