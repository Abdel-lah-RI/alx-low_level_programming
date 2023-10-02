#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int lenght = 0;

	for (lenght = 0; *s != '\0'; s++)
	{
		lenght++;
	}

	return (lenght);
}
