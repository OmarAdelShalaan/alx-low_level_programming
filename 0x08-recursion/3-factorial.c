#include "main.h"
#include <stdio.h>

/**
 * factorial - that returns the factorial of a given number.
 * @n : integer number
 * Return: int factorial of number.
 */

int factorial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else if (n < 0)
	{
		return -1;
	}
	return  n * factorial(n - 1);
}

