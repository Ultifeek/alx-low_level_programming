#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - To print the last digit of a number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d\n", n % 10);
	return (0);
}
