#include "main.h"

/**
 * swap_int - swaps 2 integers
 * @a: integer to swop
 * @b: integer to swop
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
