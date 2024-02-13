#include "main.h"

/**
 * print_square - prints square size
 * @size: size of the square
 * Return: void.
 */
int print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < (size); i++)
	{
		_putchar('#');
	}
	_putchar('\n');
}
