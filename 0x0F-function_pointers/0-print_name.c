#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: The name to be printed.
 * @f: The function pointer to apply on the name.
 *
 * Description: This function takes a name and a function pointer as arguments.
 * applies the function on the given name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}

