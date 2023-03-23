#include "main.h"

/**
 * print_line - print @n times of line
 * @n: number of lines should printed
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n)
		{
			_putchar('_');
			ch--;
		}
	}
	_putchar('\n');
}
