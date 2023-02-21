#include <stdio.h>

/**
 * main - Program thaa prints all possibled different combinations of 3 digits
 *
 * Return: Always 0
 */
int main(void)
{
	int = n;
	int = i;
	for (n = 0 ; n < 9 ; n++)
	{
		i = n + 1;
		do {
			putchar('0' + n);
			putchar('0' + i);
			if (n < 8)
			{
				putchar(',');
				puchar(32);
			}
			i++;
		} while (i < 10);
	}
	putchar('\n');
	return (0);
}
