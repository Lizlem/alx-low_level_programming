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
	while (*s != '\0')
	{
		if (*s == c)
			return (char *) s;
	}

	return (NULL);
}
