#include "main.h"
#include <stdio.h>

/**
 * print_square - print a square to a given size.
 * @size: size square to print
 *
 */
void print_square(int size)
{
	int vert, horiz;

	if (size <= 0)
	{

		return;
	}

	for (vert = size ; vert > 0 ; vert--)
	{
		for (horiz = size ; horiz > 0 ; horiz--)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
