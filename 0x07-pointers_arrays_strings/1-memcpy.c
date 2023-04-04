#include "main.h"
#include <string.h>
#include <stdio.h>

/*
 * *_memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: unsigned int
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_ptr = memcpy(dest, src, sizeof(char) * n);

	printf("dest_ptr: %p\n", dest_ptr);
	printf("    dest: %p\n", dest);
	return (0);
}
