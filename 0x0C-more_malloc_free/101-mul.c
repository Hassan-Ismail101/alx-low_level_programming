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
 * mul - function calculates the multiplication of two numbers
 * @num1: first number
 * @num2: second number
 * @len1: the length of num1
 * @len2: the length of num2
 * @len4: the length of result
 * Return: pointer to the result pointer
 */
char *mul(char *num1, int len1, char *num2, int len2, int *len4)
{
	int itr1, itr2, itr3, sum, mul, sumCarry, mulCarry;
	char *arr, *ptr;

	arr = malloc(sizeof(char) * (len1 + len2));
	itr3 = 0;
	while (itr3 < len1 + len2 - 1)
		arr[itr3++] = '0';
	arr[itr3] = '\0';
	itr1 = len1 - 2;
	while (itr1 > -1)
	{
		sumCarry = 0;
		mulCarry = 0;
		itr2 = (len2 - 2);
		itr3 = len1 + len2 - 2 - (len1 - 2 - itr1);
		while (itr2 > -1)
		{
			mul = (num1[itr1] - 48) * (num2[itr2--] - 48);
			sum = arr[itr3] - 48 + mulCarry + sumCarry + (mul % 10);
			arr[itr3--] = sum % 10 + 48;
			sumCarry = sum / 10;
			mulCarry = mul / 10;
		}
		arr[itr3] += sumCarry + mulCarry;
		itr1--;
	}
	while (arr[itr3] == '0')
		itr3++;
	if (len1 + len2 - itr3 == 1)
		itr3 -= 1;
	ptr = malloc(sizeof(char) * (len1 + len2 - itr3));
	if (ptr == NULL)
		return (NULL);
	*len4 = 0;
	while (arr[itr3] != '\0' && (len1 + len2 - itr3))
		ptr[(*len4)++] = arr[itr3++];
	ptr[*(len4)] = '\0';
	free(arr);
	return (ptr);
}
/**
 * main - entry point
 * @argc: the number of arguments
 * @argv: pointer of arguments
 * Return: zero if success
 */
int main(int argc, char **argv)
{
	int len;
	char *ptr;

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
	ptr = mul(argv[1], is_digits_only(argv[1]),
			argv[2], is_digits_only(argv[2]), &len);
	printf("%s\n", ptr);
	free(ptr);
	return (0);
}
