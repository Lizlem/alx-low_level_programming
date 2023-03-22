#include "main.h"
#include <stdio.h>

/**
 * _abs - prints out the sign of a a number
 *
 * @int: parameter to be printed
 * @n: parameter to be printed
 *
 * Return: the absolute integer of a num
 */

int _abs(int n)
{
	if (n < 0)
	{
		printf("absValue = -%d\n", n);
	}
	else
	{
		printf("absValue = %d\n", n);
	}
	return (0);
}
