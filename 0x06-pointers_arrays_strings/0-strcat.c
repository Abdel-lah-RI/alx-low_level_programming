#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int c, j;

	c  = 0;
	while (dest[c])
		c++;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[c + j] = src[j];
	dest[c + j] = '\0';
	return (dest);
}
