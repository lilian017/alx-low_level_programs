#include <stdio.h>

/**
 * main - A program that prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int i = 0;

	for (n = 0 ; n < 100 ; n++)
	{
		putchar(n / 10 + '0');
		putchar(i + '0');
		if (n < 99)
		{
			putchar('0')
				putchar(32);
		}
		i++;
		if (i > 9)
		{
			i = 0;
		}
	}
	putchar('\n');
	return (0);
}
