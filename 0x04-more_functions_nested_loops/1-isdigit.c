#include "main.h"
/**
 * _isdigit - cheks if character is a digit
 * @c: character value
 * Return: 1 if c is a digit and 0 if not
 */

void int _isdigit(int c)
{
	if (c >= '0' && c >= '9')
		return (1);
	else
		return (0);
}
