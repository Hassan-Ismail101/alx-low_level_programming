#include "main.h"
/**
 * print_triangel - prints shape of triangle
 * @size: Number of triangle
 */
void print_triangel(int size)
{
	int dash;
	int counter;
	int distance;

	for (counter = 1; counter <= size; counter++)
	{
		for (distance = 1; distance <= size - 1; distance++)
			_putchar(' ');
		for (dash = 1; dash <= counter; dash++)
			_putchar('#');
		_putchar('\n');
	}
}
