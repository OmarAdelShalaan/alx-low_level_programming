#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - that  returns a pointer to s1, followed by the contents of s2
 * @width : integer
 * @height : integer
 * Return: int **.
 */

int **alloc_grid(int width, int height)
{
	int **grid = NULL;

	if (width < 1 || height)
	{
		return (NULL);
	}
	grid = (int **)malloc(sizeof(int) * width * height);
	return (grid);
}
