#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - that returns the value of x raised to the power of y.
 * @x : integer number
 * @y : integer power number
 * Return: integer power of number.
 */

int _pow_recursion(int x, int y)
{
    //static int powResult = 1;
    if (y == 1)
    {
        return x;
    }
    esle if (y < 0)
    {
    	return -1;
    }
    //powResult *= _pow_recursion (x, --y);
    return x * _pow_recursion(x, --y);
}

