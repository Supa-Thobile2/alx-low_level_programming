#include "main.h"
/**
 * _isalpha - checks for alphabets
 * @c: character to be checkecked
 *
 * Return: 1 if charather is a letter and 0 if it is not
 */
void int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);
}

