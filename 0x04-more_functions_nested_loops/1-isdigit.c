#include "main.h"
/**
 * _isdigit - cheks if character is a digit
 * @c: character value
 * Return: 1 if c is a digit and 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c >= '9')
		return (0);
	else
		return (1);
}
