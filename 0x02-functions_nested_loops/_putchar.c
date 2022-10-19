#include "main.h"
#include <unitstd.h>


/**
 * _putchar - writes character c to stout
 * @c: the character to print
 *
 * Return: on succes 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
