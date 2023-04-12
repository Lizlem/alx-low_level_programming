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
	int s1len = 0;
	int s2len = 0;
	int i = 0;

	s1 = malloc(sizeof(char) * i);

	for (i = 0 ; s1[i] != '\0' ; i++)
		s1len++;
	for (i = 0 ; s2[i] != '\0' ; i++)
		s2len++;
	for (i = 0 ; i <= s2len ; i++)
		s1[s1len + i] = s2[i];
	return (NULL);
}
