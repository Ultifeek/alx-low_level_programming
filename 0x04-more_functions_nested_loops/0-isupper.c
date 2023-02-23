#include "main.h"

/**
 * _isupper - function that checks if parameter is uppercase
 * @c: input parameter
 * Return: 1 if is an uppercase character, 0 if otherwise
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
