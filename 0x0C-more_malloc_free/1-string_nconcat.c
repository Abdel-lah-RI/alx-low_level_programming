#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *stg;
	unsigned int a, b, s1leng, s2leng;

	/*checks if the strings are null*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*find out the length of the srings*/
	for (s1leng = 0; s1[s1leng] != '\0'; s1leng++)
		;
	for (s2leng = 0; s2[s2leng] != '\0'; s2leng++)
		;
	/*memory preallocation for cases 1 & 2*/
	stg = malloc(s1leng + n + 1);
	if (stg == NULL)
	{
		return (NULL);
	}
	/* cp first string to stg*/
	for (a = 0; s1[a] != '\0'; a++)
		stg[a] = s1[a];
	/* cp second string to stg */
	for (b = 0; b < n; b++)
	{
		stg[a] = s2[b];
		a++;
	}

	stg[a] = '\0';
	return (stg);
}
