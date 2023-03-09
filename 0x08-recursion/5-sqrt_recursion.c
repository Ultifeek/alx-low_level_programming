#include "main.h"

/**
 * power - returns the natural square root of a number
 * @n: input number
 * @m: iteration
 * Return: square root
 */

int power(int n, int m)
{
	if (m % (n / m) == 0)
	{
		if (m * (n / m) == n)
			return (m);
		else
			return (-1);
	}
	return (0 + power(n, m + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power(n, 2));
}
