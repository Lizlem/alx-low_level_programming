#include <stdio.h>

/**
 *
 * main - prints out the size of various types on computer
 *
 * Return: 0
 */

int main(void)
{
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of long int: %zu bytes\n", sizeof(longintType));
	printf("Size of char: %zu byte\n", sizeof(charType));
	printf("Size of long long. int: %zu bytes\n", sizeof(longlongintType));
	return (0);
}
