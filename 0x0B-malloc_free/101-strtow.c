#include "main.h"
#include <stdlib.h>
/**
 * word - merge string to words
 * @str: the string
 * @words: the number of words
 * @maxlen: the max len of word
 * Return: true if there is a word
 */
int word(char *str, int *const words, int *const maxlen)
{
	int wordlen;
	int itr;
	int flag = 0;

	itr = 0;
	*maxlen = 0;
	*words = 0;
	wordlen = 0;
	while (*(str + itr) != '\0')
	{
		if (*(str + itr) != ' ' && flag == 0)
		{
			(*words)++;
			flag = 1;
		}
		if (*(str + itr) == ' ' && flag == 1)
		{
			flag = 0;
			if (*maxlen < wordlen)
				*maxlen = wordlen;
			wordlen = 0;
		}
		if (flag)
			wordlen++;
		itr++;
	}
	return (*words);
}
/**
 * arr_of_string - create 2D array
 * @word: 1D size
 * @wordlen: 2D size
 * Return: pointer of 2D array
 */
char **arr_of_string(int word, int wordlen)
{
	char **ptr;
	int itr1D;

	if (word <= 0 || wordlen <= 0)
		return (NULL);
	itr1D = 0;
	ptr = (char **)malloc(sizeof(char *) * word);
	if (ptr == NULL)
		return (NULL);
	for (itr1D = 0; itr1D < word - 1; itr1D++)
	{
		*(ptr + itr1D) = (char *)malloc(sizeof(char) * wordlen);
		if (*(ptr + itr1D) == NULL)
			return (NULL);
	}
	*(ptr + itr1D) = NULL;
	return (ptr);
}
/**
 * strtow - turn string into word
 * @str: the string
 * Return: pointer to the word
 */
char **strtow(char *str)
{

	int wordItr = 0;
	int strItr = 0;
	int words;
	int maxlen;
	char **ptr;
	int itr = 0;
	int flag = 0;

	word(str, &words, &maxlen);
	words++;
	ptr = arr_of_string(words, maxlen);
	while (*(str + itr) != '\0')
	{
		if (*(str + itr) != ' ' && flag == 0)
			flag = 1;
		if (*(str + itr) == ' ' && flag == 1)
		{
			if (strItr != 0)
			{
				ptr[wordItr][strItr] = '\0';
				wordItr++;
				strItr = 0;
			}
			flag = 0;
		}
		if (flag)
			ptr[wordItr][strItr++] = *(str + itr);
		itr++;
	}
	return (ptr);
}
