#include <stdio.h>
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
	return value;
}
/**
 * main - entry point
 * @argc: the number of the arguments
 * @argv: the vector of the arguments
 * Return: 0 (success) or 1 (error)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	printf("%d\n", str_into_int(argv[1]) * str_into_int(argv[2]));
	return (0);
}
