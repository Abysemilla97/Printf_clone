#include "main.h"
#include <stdio.h>

/**
 * my_printpercentage - a function that prints percentage.
 * @argc: count characters. 
 * Return: nothing 0.
 */
int my_printpercentage(_attribute_((unused))va_list)
{
	my_write_abg('%');
	return (1);
}
