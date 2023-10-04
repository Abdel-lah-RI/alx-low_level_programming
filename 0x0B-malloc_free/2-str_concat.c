#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *m;
	int  n, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	n = k = 0;

	while (s1[n] != '\0')
		n++;
	while (s2[k] != '\0')
		k++;
	m = malloc(sizeof(char) * (n + k + 1));

	if (m == NULL)
		return (NULL);
	n = k = 0;
	while (s1[n] != '\0')
	{
		conct[n] = s1[n];
		n++;
	}

	while (s2[k] != '\0')
	{
		conct[n] = s2[k];
		n++, k++;
	}
	m[n] = '\0';
	return (m);
}
