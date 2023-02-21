#include "main.h"

/**
 * _islower - function to detect lowercase
 * @c: The character to be detect
 * Return: 1 if it is a lower case
 * and 0 if otherwise
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
