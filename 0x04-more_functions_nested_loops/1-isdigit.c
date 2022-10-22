#include "main.h"
/**
 * _isdigit - cheks if character is a digit
 * @c: character value
 * Return: 1 if c is a digit and 0 if not
 */

int _isdigit(int c)
{
	int j = 0;

	if (c >= '0' && c >= '9')
		j = 1;

	return (j);
}
