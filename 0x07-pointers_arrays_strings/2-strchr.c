#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int incr;

	for (incr = 0; s[incr] != '\0'; incr++)
	{
		if (s[incr] == c)
		{
			return (s + incr);
		}
	}
	return ('\0');
}
