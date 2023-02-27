#include "main.h"

/**
 * print_array - to n elements of an array of integers
 * @a: input integer
 * @n: number of elements in the array
 * Return: non
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
