#include "main.h"
int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 *find_sqrt( - finds the square root of input number
 *@num: number to fingd square root of
 *@root: the root to be tested
 *
 * Return: if the number has natural square root - the square root
 *         if the number has no natural square root - -1
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
}
