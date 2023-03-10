#include "main.h"

/**
 * _strlen - to get the length of a string
 * @s: input string
 * Return: string length
 */

int _strlen(char *s)
{
	int l = 0;

	while (*(s + l) != '\0')
	{
		l++;
	}
	return (l);
}
