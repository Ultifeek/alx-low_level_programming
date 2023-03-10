#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
