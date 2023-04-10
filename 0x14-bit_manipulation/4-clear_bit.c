#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: bit
 * @index: index of the bit
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int t;

	if (index >= 62)
	{
		return (-1);
	}
	t = 1 << index;
	if (*n & t)
	{
		*n ^= t;
	}
	return (1);
}
