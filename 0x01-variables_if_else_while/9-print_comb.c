#include <stdio.h>

/**
 * main - Prints numbers between 00 to 89.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	
	}

	putchar('\n');
	return (0);
}
