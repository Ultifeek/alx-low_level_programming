#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: unsigned long int
 * @index: index of the bit
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int t;

	if (index >= 62)
	{
		return (-1);
	}
	t = 1 << index;
	*n = (*n | t);
	return (1);
}
