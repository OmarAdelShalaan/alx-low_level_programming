#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - that creates an array of chars
 * @size : size of array
 * @c : char will initialized
 * Return: char *.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *str = (char *)malloc(sizeof(char) * size);
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
