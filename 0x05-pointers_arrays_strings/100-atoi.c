#include "main.h"

/**
 * _atoi - convert str to number
 * @s: pointer to the string
 *
 * Return: the number value
 */

int _atoi(char *s)
{
	int flag;
	int num;
	int mines;
	int itr;

	flag = 0;
	num = 0;
	mines = 0;
	itr = 0;
	while (*(s + itr) != '\0')
	{
		if (flag == 0 && *(s + itr) == '-')
			mines++;
		if (*(s + itr) >= '0' && *(s + itr) <= '9')
		{
			if (mines % 2 != 0)
				num = (num * 10) - (*(s +itr) - 48);
			else
				num = (num * 10) + (*(s + itr) - 48);
			flag = 1;
		}
		if (flag == 1 && (*(s + itr) < '0' || *(s + itr) > '9'))
			break;
		itr++;
	}
	return (num);
}
