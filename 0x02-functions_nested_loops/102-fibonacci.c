#include <stdio.h>

/**
 * main - to print the first 50 Fibonacci numbers
 * Return: always 0
 */
int main(void)
{
	int n;
	long int n1, n2, f;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);
	for (n = 0; n < 48; n++)
	{
		f = n1 + n2;
		printf(", %ld", f);
		n1 = n2;
		n2 = f;
	}
	printf("\n");
	return (0);
}
