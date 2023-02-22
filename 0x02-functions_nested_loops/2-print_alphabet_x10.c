#include "main.h"

/**
 * main - Prints the alphabet in lowercase ten times.
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char l;
	
	int i;
	
	for (i = 0; i < 10 ; l++)
	{
		for (l = 'a' ; l <= 'z' ; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
