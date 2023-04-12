#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * create_array - creates an array of chars
 * @size: memory size
 * @c: char
 *
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(sizeof(char) * size);
	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
