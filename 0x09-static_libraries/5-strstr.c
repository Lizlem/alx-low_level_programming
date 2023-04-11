#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _strstr - main function
 * @haystack: string
 * @needle: string
 *
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *b = haystack;
		char *c = needle;

		while (*b == *c && *c != '\0')
		{
			b++;
			c++;
		}
		if (*c == '\0')
			return (haystack);
	}
	return (0);
}
