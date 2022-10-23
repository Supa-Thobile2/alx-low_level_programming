#include "main.h"
/**
 * islower - checks if character is lower case
 * @c: the character
 * Return: 1 if letter is lower case and 0 if not
 */

void int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
