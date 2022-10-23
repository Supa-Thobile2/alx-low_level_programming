#include "main.h"
/**
 *print_last_digit - prints the last digit
 *@n : the number
 *Return: last digit
 */
int int_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= n - 1;
	_putchar(ld + '0');
	return (0);
}
