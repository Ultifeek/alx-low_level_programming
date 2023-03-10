#include "main.h"

/**
 * *_memcpy - copy memory area
 * @dest: destination memory
 * @src: soure memory
 * @n: amount of byte
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		*(dest + j) = *(src + j);
	}
	return (dest);
}
