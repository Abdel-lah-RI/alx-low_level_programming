#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array element
 * @array: array
 * @size: how many elements to print
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *the_end = array + size - 1;

	if (array && size && action)
		while (array <= the_end)
			action(*array++);
}
