#include "main.h"
/**
 * print_triangle - prints shape of triangle
 * @size: Number of triangle
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int dash;
		int counter;
		int distance;

		for (counter = 1; counter <= size; counter++)
		{
			for (distance = 1; distance <= size - counter; distance++)
				_putchar(' ');
			for (dash = 1; dash <= counter; dash++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
