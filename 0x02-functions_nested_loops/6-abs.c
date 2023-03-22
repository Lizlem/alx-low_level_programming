#include "main.h"
#include <stdio.h>

/**
 * _abs - prints out the sign of a a number
 *
 * @n: parameter to be printed
 *
 * Return: the absolute integer of a num
 */

int _abs(int n)
{
	if (n < 0)
		n = -(n);
	else if (n > 0)
		n = n;
	return (n);
}
