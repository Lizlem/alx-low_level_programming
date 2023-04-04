#include "main.h"
#include <string.h>
#include <stdio.h>

/*
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	char *first_c = strchr(s, c);

	printf("first_c: %s\n", first_c);

	return (0);
}
