#include <stdio.h>
#include "function_pointers.h"

/**
* print_name -  prints a name to std out
* @name: name to be printed
* @f: function pointer
* Return: void
*/

void print_name(char *name, void(*f)(char *))
{
	f(name);
}

