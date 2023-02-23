#include "main.h"

/**
 * print_numbers - function that prints numbers between 0 to 9
 * Return: null
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
