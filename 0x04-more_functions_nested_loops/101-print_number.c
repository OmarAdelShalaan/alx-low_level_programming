#include "main.h"

/**
 * print_number - Prints an integer
 * @n: Integer parameter
 * Return: Integer
 */
void print_number(int n)
{
	unsigned int m = 0;

	if (n < 0)
	{
		m = -n;
		_putchar('-');
	}
	else
		m = n;

	if (m / 10)
		print_number(m / 10);

	_putchar((m % 10) + '0');
}
