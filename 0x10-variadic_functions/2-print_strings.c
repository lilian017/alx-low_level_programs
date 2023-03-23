#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings - prints strings
 * @separator: string printed between strings
 * @n: number of strings passed to the function
 *
 * Return: string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list op;

	va_start(op, n);

	for (unsigned int i = 0; i < n; i++)
	{
		char *string = va_arg(op, char*);

		printf("%s", string);
		if (string == NULL)
			{

				printf("nil %s", va_arg(op, char*));
			}
		if (separator != NULL && i < n - 1)
		{

			printf("%s", separator);
		}
	}
	va_end(op);
	printf("\n");
}
