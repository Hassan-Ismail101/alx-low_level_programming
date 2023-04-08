#include <stdio.h>
/**
 * _isdigit - check if the all string consists of digits only
 * @str: the string
 * Return: true if all digits and false if contains another value
 */
int _isdigit(char *str)
{
	int itr;

	itr = 0;
	if (*str == '-')
		itr++;
	while (*(str + itr) != '\0')
	{
		if (*(str + itr) < '0' || *(str + itr) > '9')
			return (0);
		itr++;
	}
	return (1);
}
/**
 * str_into_int - used to convert from string to integer
 * @str: the string
 * Return: integer value
 */
int str_into_int(char *str)
{
	int value;
	int itr;
	int negative;

	negative = 0;
	value = 0;
	itr = 0;
	if (*str == '-')
	{
		negative = 1;
		itr = 1;
	}
	while (*(str + itr) != '\0')
	{
		value *= 10;
		if (negative)
			value -= (*(str + itr) - 48);
		else
			value += (*(str + itr) - 48);
		itr++;
	}
	return (value);
}
/**
 * main - entry point
 * @argc: the number of the arguments
 * @argv: the vector of the arguments
 * Return: 0 (success) or 1 (error)
 */
int main(int argc, char *argv[])
{
	int sum;
	int itr;

	if (argc < 2)
	{
		puts("0");
		return (0);
	}
	sum = 0;
	for (itr = 1; itr < argc; itr++)
	{
		if (_isdigit(argv[itr]))
			sum += str_into_int(argv[itr]);
		else
		{
			puts("Error");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
