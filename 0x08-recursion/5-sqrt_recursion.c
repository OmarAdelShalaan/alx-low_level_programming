#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - that returns the natural square root of a number.
 * @n : integer
 * Return: integer square root number
 */

int first_sqrt_recursion(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else 
		return (first_sqrt_recursion(n, 0));
}

/**
 * first_sqrt_recursion - that returns the natural square root of a number.
 * @n : integer
 * @i : integer
 * Return: integer square root number
 */

int first_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return i;
	return (first_sqrt_recursion(n, i + 1));
}

