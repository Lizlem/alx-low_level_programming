#include "main.h"
#include <string.h>

/*
 * strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string
 *
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int initial;

	unsigned int len1 = strlen(s);
	unsigned int len2 = strlen(accept);

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
			if (accept[j] == s[i])
			{
				return (initial);
			}
			else
				break;
	}
	return (initial);
}
