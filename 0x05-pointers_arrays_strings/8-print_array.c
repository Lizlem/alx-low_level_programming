#include "main.h"

/**
 * print_array - prints elements of an array of integers
 * @a: array name
 * @n: number of elements in array
 *
 * Return: a and n
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		printf("\n");
}
