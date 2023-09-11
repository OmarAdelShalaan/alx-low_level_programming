#include <stdio.h>
#include <stdlib.h>

#define __FILENAME__ (__FILE__)

/**
 * main - that prints the name of the file it was compiled from
 * Return: void
 */

void main(void)
{
	printf("%s\n", __FILENAME__);
}

