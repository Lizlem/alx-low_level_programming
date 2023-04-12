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
	int size = s1len + s2len +1;

	for (i = 0 ; i < s1len ; i++)
		s[i] = s1[i];
	for (i = 0 ; i < s2len ; i++)
		s[s1len + i] = s2[i];

	s[size - 1] = '\0';

	return (NULL);
}
