#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = 48; digit1 < 58; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 58; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 < 58; digit3++)
			{
				putchar(digit1);
				putchar(digit2);
				putchar(digit3);
				if (digit1 == 55 && digit2 == 56 && digit3 == 57)
				{
					continue;
				}
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
