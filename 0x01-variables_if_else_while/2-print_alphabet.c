# include<stdio.h>

/**
 * main - To print alphabet in lowercase.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; ++1)
	{
		putchar(a[i]);
	}
	putchar('\n');
	return (0);
}
