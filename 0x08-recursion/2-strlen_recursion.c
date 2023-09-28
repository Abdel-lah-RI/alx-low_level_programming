#include "main.h"
/**
 * _strlen_recursion - Return length of a string.
 * @s: string to be measured.
 *
 * Return: length of the string.
 */
int _strlen_recursion(char *s)
{
	int lengtr = 0;

	if (*s)
	{
		lengtr++;
		lengtr += _strlen_recursion(s + 1);
	}

	return (lengtr);
}
