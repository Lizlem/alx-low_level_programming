#include <stdio.h>

/**
 * main - prints out function below
 *
 * Return: 0
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
