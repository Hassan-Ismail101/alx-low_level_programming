#include <stdio.h>
#include "main.h"
/**
 * print_fibonacci - write the @n times of fibonacci numbers
 * @n: the number of counts
 */
void print_fibonacci(int n)
{
	unsigned int temp1_1, temp1_2, temp1_3, CV_1, part;
	unsigned int temp2_1, temp2_2, temp2_3, CV_2, CV_3;

	part = 100, temp1_1 = 1, temp1_2 = 0, temp1_3 = 0;
	temp2_1 = 0, temp2_2 = 0, temp2_3 = 0;
	while (n--)
	{
		CV_1 = temp1_1 + temp2_1;
		CV_2 = (temp1_2 + temp2_2) + (CV_1 / part);
		CV_3 = (temp1_3 + temp2_3) + ((CV_2 / part));
		CV_1 %= part;
		CV_2 %= part;
		if (n == 0)
		{
			printf("%i%.2i%.2i\n", CV_3, CV_2, CV_1);
			break;
		}
		if (CV_3 > 0)
		{
			printf("%i%.2i%.2i, ", CV_3, CV_2, CV_1);
		}
		else if (CV_2 > 0)
		{
			printf("%i%.2i, ", CV_2, CV_1);
		}
		else
		{
			printf("%i, ", CV_1);
		}
		temp2_1 = temp1_1, temp2_2 = temp1_2, temp2_3 = temp1_3;
		temp1_1 = CV_1, temp1_2 = CV_2, temp1_3 = CV_3;
	}
}
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	print_fibonacci(30);
	return (0);
}
