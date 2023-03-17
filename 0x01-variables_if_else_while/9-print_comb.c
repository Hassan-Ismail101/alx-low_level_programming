#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char counter = '0';

	while (counter <= '9')
	{
		putchar(counter);
		if (counter != '9')
		{
			putchar(',');
			putchar(' ');
		}
		counter++;
	}
	putchar('\n');
	return (0);
}
