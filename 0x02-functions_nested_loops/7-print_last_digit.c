#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: function parameter
 * Return: always r
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;
	if (r < 0)
		r = -(r);
	_putchar(r + '0');
	return (r);
}
