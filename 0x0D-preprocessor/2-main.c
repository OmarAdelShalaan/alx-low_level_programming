#include <stdio.h>
#include <stdlib.h>

#define __FILENAME__ (__FILE__)

/**
 * main - that prints the name of the file it was compiled from
 * Return: int
 */

int main(void)
{
	printf("%s\n", __FILENAME__);
	return (0);
}

