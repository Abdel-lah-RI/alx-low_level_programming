#include <stdlib.h>
#include "main.h"

/**
 * *_memset - function which fills memory with a constant byte
 * @s: the memory area to be filled
 * @b: the char to copy
 * @n: the number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}

/**
 * *_calloc - a function that allocates memory for an array
 * @nmemb: the number of the elements in the array
 * @size: the size of each element
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pter;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pter = malloc(size * nmemb);

	if (pter == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (pter);
}
