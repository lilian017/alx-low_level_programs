#include "main.h"

/**
 * main - A program that prints the lowercase alphabet
 *
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
