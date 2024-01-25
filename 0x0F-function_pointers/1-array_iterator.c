#include "function_pointers.h"
	/**
	 * array_iterator - prints each array elem on a newl
	 * @array: array
	 * @size: how many elem to print
	 * @action: pointer to print in regular or hex
	 * Return: void
	 */
	{
		unsigned int i;


		if (array == NULL || action == NULL)
			return;


		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
