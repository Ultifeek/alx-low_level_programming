#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string
 * @s: main string
 * @accept: string to find
 * Return: a pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; *(s + x) != '\0'; x++)
	{
		for (y = 0; *(accept + y) != '\0'; y++)
		{
			if (*(s + x) == *(accept + y))
				return (s + x);
		}
	}
	return ('\0');
