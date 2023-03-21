#include <stdio.h>
/**
 * numbers_dividable_on_three_and_five - get the summation of numbers
 */
void numbers_dividable_on_three_and_five(void)
{
	unsigned int sum;
	unsigned int startNum;

	sum = 0;
	startNum = 1023;
	startNum = startNum - (startNum % 3);
	while (startNum)
	{
		sum += startNum;
		startNum -= 3;
	}
	startNum = 1023;
	startNum -= (startNum % 5);
	while (startNum)
	{
		if (startNum % 3 != 0)
			sum += startNum;
		startNum -= 5;
	}
	printf("%u\n", sum);
}
/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	numbers_dividable_on_three_and_five();
	return (0);
}
