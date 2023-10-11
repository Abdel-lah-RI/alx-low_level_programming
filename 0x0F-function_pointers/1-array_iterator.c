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
	int i;

	if (array && action)
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
