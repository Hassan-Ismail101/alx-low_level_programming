#include "main.h"
#include <stdio.h>
#include <stdlib.h>
void print_grid(int **grid, int width, int height)
{
	int w;
	int h;

	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			printf("%d ", grid[h][w]);
			w++;
		}
		printf("\n");
		h++;
	}
}
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
			printf(" ");
		if (!(i % 10) && i)
			printf("\n");
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}
int main(int ac, char *av[])
{
	char *s;
	int **grid;

	printf("########### number 3 #############\n");
	grid = alloc_grid(6, 4);
	if (grid == NULL)
		return (1);
	print_grid(grid, 6, 4);
	printf("\n");
	grid[0][3] = 98;
	grid[3][4] = 402;
	print_grid(grid, 6, 4);
	s = argstostr(ac, av);
	if (s == NULL)
		return (1);
	printf("%s", s);
	free(s);
	return (0);
}
