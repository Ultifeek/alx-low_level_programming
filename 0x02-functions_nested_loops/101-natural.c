#include <stdio.h>

/**
 * main -  computes and prints the sum of all the multiples
 * Return: always 0
 */

int main(void)
{
	int n;
	int m;

	for (n = 1; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			m += n;
	}
	printf("%d\n", m);
	return (0);
}
