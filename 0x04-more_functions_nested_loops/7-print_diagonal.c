#include "main.h"

/**
 * print_diagonal - print a diagonal line to a given lenth.
 * @n: length to print to.
 */
void print_diagonal(int n)
{
	int prior, i;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 0 ; i < n ; i++)
	{
		prior = i;
		while (prior > 0)
		{
			putchar(32);
			prior--;
		}
		putchar('\\');
		putchar('\n');
	}
}
