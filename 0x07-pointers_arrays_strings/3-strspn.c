#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: byte location
 * Return: amount of accepted bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		k = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				k = 0;
				break;
			}
		}
		if (i == 1)
		{
			break;
		}
	}
	return (i)
}
