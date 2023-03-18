#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int digit1, digit2, digit3, digit4, flag = 0;

	for (digit1 = 48; digit1 < 58; digit1++)
	{
		for (digit2 = 48; digit2 < 58; digit2++)
		{
			if (flag == 1)
				break;
			for (digit3 = 48; digit3 < 58; digit3++)
			{
				for (digit4 = 48; digit4 < 58; digit4++)
				{
					if (digit1 == digit3 && digit2 == digit4)
						continue;
					if (digit3 == 48 && digit4 == 48)
					{
						digit4 = digit2 + 1;
						digit3 = digit1;
						if (digit2 == 57)
						{
							digit4 = 48;
							digit3++;
						}
					}
					putchar(digit1);
					putchar(digit2);
					putchar(32);
					putchar(digit3);
					putchar(digit4);
					if (digit1 == 57 && digit2 == 56 && digit3 == 57 && digit4 == 57)
					{
						flag = 1;
						break;
					}
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
