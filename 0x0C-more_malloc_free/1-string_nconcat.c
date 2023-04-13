#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * *string_nconcat - concatenates 2 strings
 * @s1: string 1
 * @s2: string 3
 * @n: integer
 *
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (n >= j)
		k = i + j;
	else
		k = i + n;
	s = malloc(sizeof(char) * k + 1);
	if (s == NULL)
		return (NULL);
	return (s);
}
