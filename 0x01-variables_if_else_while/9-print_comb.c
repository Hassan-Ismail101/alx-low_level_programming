#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int counter = 48;

	while (counter < 58)
	{
		putchar(counter);
		if (counter != 57)
		{
			putchar(',');
			putchar(' ');
		}
		counter++;
	}
	putchar('\n');
	return (0);
}
