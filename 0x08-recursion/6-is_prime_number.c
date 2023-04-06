#include "main.h"
#include <string.h>

/**
 * is_prime_number - prints prime nunmbers
 * @n: integer
 *
 * Return: 0
 */

int is_prime_number(int n)
{
	int i = 0;

	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	else
		is_prime_number(i - 1);
	return (0);
}
