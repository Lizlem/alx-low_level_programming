#include "main.h"
#include <string.h>

/*
 * _puts_recursion - prints a string
 * @s: string
 *
 * Return: 0
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	_puts_recursion(s + 1);
}
