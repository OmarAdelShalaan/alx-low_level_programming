#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - returns 1 if the input integer is a prime number, otherwise return 0.
 * @n : number
 * Return: integer 0 or 1.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2 || n == 3)
		return (1);
	else if ((((n * n) - 1) % 24) == 0)
		return (1);
	else
		return (0);
}

