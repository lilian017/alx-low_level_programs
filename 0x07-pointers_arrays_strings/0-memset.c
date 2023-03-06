#include "main.h"

/*
 * _memset - function fills the first n bytes of the momory area
 * it is pointed to by @s with a constant byte @b
 *
 * Return: a pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
