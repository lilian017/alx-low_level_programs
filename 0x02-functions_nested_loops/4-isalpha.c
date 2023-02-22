#include "main.h"
#include<ctype.h>

/**
 * _isapha - check if the given character is lowercase.
 * @c: character to test.
 *
 * Return: 1(True) else 0 (False)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
