#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_them_all - sums all its parameters
 * @n: if n ==o Return o
 *
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;

	va_list args;

	va_start(args, n);

	for (unsigned int i = 0; i < n; i++)
	{

		int arg = va_arg(args, int);

		sum += arg;

	}
	va_end(args);
	return (sum);
}
