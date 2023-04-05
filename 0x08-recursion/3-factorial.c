#include "main.h"
#include <string.h>

/**
 * factorial - returns the facttorial of a given number.
 * @n: number
 *
 * Return: 0
 */

int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}
