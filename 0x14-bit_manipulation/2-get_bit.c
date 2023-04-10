#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: value variable
 * @index: the index of the variable
 * Return: the value of the index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int t;

	if (n == 0 && index < 64)
	{
		return (0);
	}
	for (t = 0; t < 64; n >>= 1, t++)
	{
		if (index == t)
			return (n & 1);
	}
	return (-1);
}
