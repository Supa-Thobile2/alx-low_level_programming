#include <stdio.h>

/**
 *array_iterator - iterate through the array
 *@array: array
 *@size: size of the array
 *@action: a void function
 *Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array && size && action)
	{
		for (x = 0; x < size; x++)
		{
			(*action)(array[x]);
		}
	}
}
