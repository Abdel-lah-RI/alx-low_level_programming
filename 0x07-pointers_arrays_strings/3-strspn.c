#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int incra, ancrb;

	for (incra = 0; s[incra] != '\0'; incra++)
	{
		for (incrb = 0; accept[incrb] != s[incra]; incrb++)
		{
			if (accept[incrb] == '\0')
				return (incra);
		}
	}
	return (incra);
}
