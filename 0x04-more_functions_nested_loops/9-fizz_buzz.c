#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int counter;

	for (counter = 1; counter <= 100; counter++)
	{
		if (counter == 100)
		{
			printf("Buzz\n");
			break;
		}
		if (counter % 3 == 0 && counter % 5 == 0)
			printf("FizzBuzz ");
		else if (counter % 3 == 0)
			printf("Fizz ");
		else if (counter % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", counter);
	}
}
