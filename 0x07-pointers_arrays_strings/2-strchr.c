#include "main.h"

/**
 * _strchr - locate character in a string
 * @s: source string
 * @c: character to find
 *
 * Return: the string character found
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
