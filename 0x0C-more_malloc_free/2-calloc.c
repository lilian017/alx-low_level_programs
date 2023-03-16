#include"main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb:  elements ofsize bytes that returns a pointer to allocated memory
 * @size: allocate element of size bytes
 *
 * Return: If nmemb or size is 0, _calloc returns Null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < (nmemb * size); b++)
		a[b] = 0;
	return (a);
}
