#include <stdio.h>

/**
 * main - prints number of arguments passed to it followed by a new line.
 * @argc - argument count 
 * @argv - arguments
 *
 * Return: 0
 */
int main(int argc char **argv)
{
	(void)argv;

	printf("%d\n",argc - 1);
	return (0);
}
