#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * is_digits_only - check if the string include symbol
 * @str: pointer to string
 * Return: length or zero if there is a symbol
 */
int is_digits_only(char *str)
{
	int len;

	len = 0;
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		len++;
		str++;
	}
	return (len + 1);
}
/**
 * main - entry point
 * @argc: the number of arguments
 * @argv: pointer of arguments
 * Return: zero if success
 */
int main(int argc, char **argv)
{
	printf("argc : %d\n", argc);
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (is_digits_only(argv[1]) == 0 || is_digits_only(argv[2]) == 0)
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
