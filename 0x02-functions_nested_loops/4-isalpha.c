#include "main.h"

/**
 * _isalpha - prints out function as below
 *
 * @c: paramenter to be printed
 *
 * Return: 1 if true otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
