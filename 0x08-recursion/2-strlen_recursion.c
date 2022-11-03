#include "main.h"

/**
 * _strlen_recursion - print the lenght of a string
 * @s: string to be measured
 *
 * Return: The lenght of a string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (0);
	len = 1 + _strlen_recursion(s + 1);
}
