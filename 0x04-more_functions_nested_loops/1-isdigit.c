#include "main.h"
/**
 * _isdigit - cheks if character is a digit
 * @c: character value
 * Return: 1 if c is a digit and 0 if not
 */

int _isdigit(int c)
{
	int y = 0;

	if (c >= '0' && c >= '9')
		y = 1;
	else
		y = 0

	return (y);
}
