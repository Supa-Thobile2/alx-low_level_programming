#include "main.h"

/**
* _strcat - a function that concatenates two strings
*
* @dest: pointer to destination input
* @src: pointer to source input
*
* Return: pointer resulting in string @dest
*/
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);

}
