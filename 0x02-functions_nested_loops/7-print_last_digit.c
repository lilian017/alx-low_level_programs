#include "main.h"

/**
 * print_last_digit -will print the last digit of a given number.
 * @n: Number used to find the last digit.
 *
 * Description:will print th elast digit of a given number.
 * If the no. is a negaive value will be return unsigned int.
 *
 * Return: Last digit as int value.
 */
int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
	{
		n *= -1;
	}
	_putchar('0' + n);
	return (n);
}
