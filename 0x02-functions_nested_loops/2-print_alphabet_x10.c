#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - prints the alphabet in lowercase ten times.
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char l;
	int i;

	for (i = 0; i < 10 ; i++)
	{
		for (l = 'a' ; l <= 'z' ; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
