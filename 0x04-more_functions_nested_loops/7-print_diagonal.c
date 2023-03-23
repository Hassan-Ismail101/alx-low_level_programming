#include "main.h"

/**
 * print_diagonal - print diagonal type of '\'
 * @n: the number of counts should printed
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int space;
		int counter;

		for (counter = 1; counter <= n; counter++)
		{
			for (space = 1; space < counter; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
