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
		putchar(counter++);
	}
	putchar('\n');
	return (0);
}
