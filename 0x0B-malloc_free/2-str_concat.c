#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * str_concat - concantenates 2 strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	int s1len = strlen(s1);
	int s2len = strlen(s2);
	int i = 0;
	char *s = malloc(sizeof(char) * i);

	for (i = 0 ; i < s1len ; i++)
		s[i] = s1[i];
	for (i = 0 ; i < s2len ; i++)
		s[s1len + i] = s2[i];
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	return (NULL);
}
