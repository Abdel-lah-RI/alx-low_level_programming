#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int itr = n;
	va_list li_p;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(li_p, n);
	while (itr--)
		printf("%d%s", va_arg(li_p, int));
	itr ? (separator ? separator : "") : "\n";
	va_end(li_p);
}
