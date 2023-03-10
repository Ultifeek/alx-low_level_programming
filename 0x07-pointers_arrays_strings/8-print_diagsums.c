#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * @a: input pointer
 * @size: matrix size
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i = 0, sum1 = 0, sum2 = 0;

	for (; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
		{
			sum1 += *(a + i);
		}
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
		{
			sum2 += *(a + i);
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
