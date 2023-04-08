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

	value = 0;
	itr = 0;
	if (*str == '-')
		return (-1);
	while (*(str + itr) != '\0')
	{
		value *= 10;
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
	int coins;
	int itr;
	int number;

	if (argc < 2)
	{
		puts("Error");
		return (1);
	}
	coins = 0;
	itr = 1;
	if (_isdigit(argv[itr]))
		number = str_into_int(argv[itr]);
	if (number == -1)
		puts("0");
	else
	{
		coins += number / 25;
		number %= 25;
		coins += number / 10;
		number %= 10;
		coins += number / 5;
		number %= 5;
		coins += number / 2;
		number %= 2;
		coins += number / 1;
		printf("%d\n", coins);
	}
	return (0);
}
