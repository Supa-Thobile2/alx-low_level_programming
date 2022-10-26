#include "main.h"
/**
* _strncpy - copies the string character
* @dest: pointer to 
* @src: pointer to
* Return: void
*/
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);


}
