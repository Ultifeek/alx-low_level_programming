#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: the string
 * @c: the character to be located
 * Return: pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; *(s + j) != '\0'; j++)
	{
		if (*(s + j) == c)
		{
			return (s + j);
		}
	}
	if (*(s + j) == c)
		return (s + j);
	return ('\0');
}
