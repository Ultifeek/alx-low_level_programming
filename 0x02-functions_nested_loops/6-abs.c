#include "main.h"

/**
 * _abs - to get absolute value of a number
 * @n: parameter to be determine
 * Return: always n
 */
int _abs(int n)
{
	if (n < 0)
		n = -(n);
	else if (n >= 0)
		n = n;
	return (n);
}
