#include "main.h"

/**
 * main - A program that prints the lowercase alphabet
 * void
 * Return: Always 0
 */

void print_alphabet(void)
/** implementation code goes here*/
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
