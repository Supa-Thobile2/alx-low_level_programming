#include "main.h"

/**
 * print numbers - print numbers from 0 to 9
 *
 * Return: Always 0.
 */
void int print_numbers(void)
{
	int a = 0;

	while (a < 10)
		_putchar(a++ + '0');

	_putchar("/n");
}

