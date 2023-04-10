#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return:  the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int lent, base_two;

	if (!b)
	{
		return (0);
	}
	i = 0;

	for (lent = 0; b[lent] != '\0'; lent++)
		;
	for (lent--, base_two = 1; lent >= 0; lent--, base_two *= 2)
	{
		if (b[lent] != '0' && b[lent] != '1')
			return (0);
		if (b[lent] & 1)
			i += base_two;
	}
	return (i);
}
