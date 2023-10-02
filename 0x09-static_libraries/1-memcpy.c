#include "main.h"
/**
 *_memcpy - a function that copy memory area
 *@dest: memory to store to
 *@src: memory to copy from
 *@n: number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int incr;

	for (incr = 0; incr < n; incr++)
	{
		dest[incr] = src[incr];
	}
	return (dest);
}
