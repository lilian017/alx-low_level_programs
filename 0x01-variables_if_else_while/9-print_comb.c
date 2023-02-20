#include <stdio.h>
/**
 * main - A program that prints all combinations of single-digit numbers.
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
