#include "main.h"

/**
 * print_sign - prints out the sign of a a number
 *
 * @n: parameter to be printed
 *
 * Return: 1 and + if true otherwise return 0 + 0
 */

int print_sign(int n)
{
	if (n >= 0)
		return (1 + '+');
	else
		return (0 + '0');
}
