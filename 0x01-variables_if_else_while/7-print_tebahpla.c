#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char counter = 'z';

	while (counter >= 'a')
	{
		putchar(counter--);
	}
	putchar('\n');
	return (0);
}
