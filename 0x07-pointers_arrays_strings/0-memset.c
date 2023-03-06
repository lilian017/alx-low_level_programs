#include "main.h"
#include <stdio.h>

/*
 * _memset function fills the first n bytes of the momory area
 * it is pointed to by s with a constant byte b
 *
 * Return: Always 0
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
