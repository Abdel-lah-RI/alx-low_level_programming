#include "variadic_functions.h"
#include <stdio.h>
/**
*sum_them_all - Returns the sum of all its paramters.
*@n: The number of paramters passed to the function.
*@...:A variable number of paramters to calculate the sum of.
*
*Return: If n == 0 - 0.
*Otherwise-the sum of all parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list li_p;
	int sum = 0, i = n;

	if (!n)
		return (0);
	va_start(li_p, n);
	while (i--)
		sum += va_arg(li_p, int);
	va_end(li_p);
	return (sum);
}
