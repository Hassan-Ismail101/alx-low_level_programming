#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char counter = 'a';

	while (counter <= 'z')
	{
		if (counter != 'q' && counter != 'e')
		{
			putchar(counter);
		}
		counter++;
	}
	putchar('\n');
	return (0);
}
