#include "main.h"

/**
 * main - A program that prints the lowercase alphabet
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
