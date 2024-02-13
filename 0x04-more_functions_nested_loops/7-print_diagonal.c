#include "main.h"

/**
 * print_diagonal-prints numbers diagonal
 *@n: number to be printed
 * Return: Always 0.
 */
int print_diagonal(void)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 1; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

}
