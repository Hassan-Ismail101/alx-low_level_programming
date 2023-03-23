#include "main.h"

/**
 * print_square - print square shape of #
 * @size: the number of # should printed
 */

void print_square(int size)
{
	if (size > 0)
	{
		int counter;

		for (counter = 1; counter <= size * size; counter++)
		{
			_putchar('#');
			if (counter % size == 0)
				_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
