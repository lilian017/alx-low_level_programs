#include "main.h"
#include <stdio.h>

/**
 * print_line - prints a line to a given lenght.
 * @n: length of the line.
 *
 *
 */
void print_line(int n)
{
	while (!(n <= 0))
	{
		putchar('_');
		n--;
}
	putchar('\n');
}
