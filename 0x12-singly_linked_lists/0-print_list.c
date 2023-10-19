#include "lists.h"

/**
 * _strlen - returns the lenght of a string
 * @s: the string whose lenght to check
 *
 * Return: integer lenght of string
 */
int _strlen(char *s)
{
	int itr = 0;

	if (!s)
	return (0);
	while (*s++)
	itr++;
	return (itr);
}

/**
 * print_list - prints a linked list
 * @h: pointer to header node
 *
 * Return: the size of the list
 */
size_t print_list(const list_t *h)
{
	size_t itr = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		itr++;
	}
	return (itr);
}
