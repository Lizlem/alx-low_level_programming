#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _strdup - returns a pointer
 * @str: string
 *
 * Return: 0
 */

char *_strdup(char *str)
{
	int i = 0;
	int n = 0;
	char *s = 0;

	str = malloc((sizeof(char) * i) + 1);

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}
	for (i = 0; i < n; i++)
		str[i] = s[i];
	return (str);
}
