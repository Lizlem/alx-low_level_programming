#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints out the sign of a a number
 *
 * @n: parameter to be printed
 *
 * Return: 1 and + if true otherwise return 0 and -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
