#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *st1, *st2;
	int leng1, leng2, leng, i, carry, dig1, dig2, *result, a = 0;

	st1 = argv[1], st2 = argv[2];
	if (argc != 3 || !is_digit(st1) || !is_digit(st2))
		errors();
	leng1 = _strlen(st1);
	leng2 = _strlen(st2);
	leng = leng1 + leng2 + 1;
	result = malloc(sizeof(int) * leng);
	if (!result)
		return (1);
	for (i = 0; i <= leng1 + leng2; i++)
		result[i] = 0;
	for (leng1 = leng1 - 1; leng1 >= 0; leng1--)
	{
		dig1 = st1[leng1] - '0';
		carry = 0;
		for (leng2 = _strlen(st2) - 1; leng2 >= 0; leng2--)
		{
			dig2 = st2[leng2] - '0';
			carry += result[leng1 + leng2 + 1] + (dig1 * dig2);
			result[leng1 + leng2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[leng1 + leng2 + 1] += carry;
	}
	for (i = 0; i < leng - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}

