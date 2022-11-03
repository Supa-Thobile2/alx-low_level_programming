#include "main.h"

/**
 * factorial - returns a factorial of a given number
 * @n: a number to find the factorial of
 * return: if n > 0 - the factorial of n
 *         if n < 0 - 1 to indicate error
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);
}

