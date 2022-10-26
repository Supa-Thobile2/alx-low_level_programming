#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: if str1 < str2, the negative of the first number
	if str2 == str1, 0
	str1 > str2, the positive difference of two numbewrs
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *S2  && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
