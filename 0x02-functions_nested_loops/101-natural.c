#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all numbers less than 1024(excluded)
 * that are divisible by 3 and 5
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}

	printf("%d\n", sum);

	return (0);
}
