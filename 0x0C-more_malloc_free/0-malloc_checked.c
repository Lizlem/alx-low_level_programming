#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * *malloc_checked - allocates memory
 * @b: integer
 *
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr = (unsigned int *)malloc(b * sizeof(unsigned int));

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
