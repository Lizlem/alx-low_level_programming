#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;
	char h;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (h = 'a' ; h <= 'z' ; h++)
			_putchar(h);
		_putchar('\n');
	}
}
