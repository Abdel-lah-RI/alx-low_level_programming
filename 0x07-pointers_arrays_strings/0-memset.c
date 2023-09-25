#include "main.h"
/**
 * _memset - fills a block of memory with a value
 * @s: address of memory to be filled
 * @b: the wanted value
 * @n: num of  bytes to be changed
 *
 * Return: changed array of  new values for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int indit;

	for (indit = 0; n > 0; indit++, n--)
	{
		s[indit] = b;
	}
	return (s);
}
