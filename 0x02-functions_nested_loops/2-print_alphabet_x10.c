#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int ten;
	int la;

	for (ten = 0; ten <= 10; ten++)
	{
		for (la = 'a'; la <= 10; la++)
			_putchar(la);
		_putchar('\n');
	}
}
