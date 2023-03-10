#include "main.h"

/**
 * _isdigit - function that check for numbers between 0 to 9
 * @c: input number
 * Return: 1 if its an integer, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
