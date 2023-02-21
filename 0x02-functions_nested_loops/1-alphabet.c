#include "main.h"

/**
 * print_alphabet - function that print letters of the alphabet
 * Return: Always 0
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
