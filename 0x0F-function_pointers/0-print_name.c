#include "function_pointers.h"
/**
 * print_name - a function that prints a name
 * @f: variable to hold string name
 * @name: name of person
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
