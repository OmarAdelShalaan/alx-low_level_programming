#include "function_pointers.h"

/**
 * int_index - that searches for an integer.
 * @array : array of integer
 * @size : size of array
 * @cmp : pointer of function input int return int
 * Return: int.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

