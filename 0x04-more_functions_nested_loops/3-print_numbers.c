#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 0 9
 *
 * Return: Numbers
 */
void print_numbers(void)
{
	int i;

	i = 48;

	while (i <= 57)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

