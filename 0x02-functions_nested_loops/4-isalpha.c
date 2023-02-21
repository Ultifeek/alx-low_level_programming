#include "main.h"

/**
 * _isalpha - function that detects alphabets
 * @c: The character to detect
 * Return: 1 if it an alphabet
 * and 0 if not an alphabet
 */
int _isalpha(int c)
{
	if (c > 96 && c < 123 || c > 64 && c < 91)
		return (1);
	else
		return (0);
}
