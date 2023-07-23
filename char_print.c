#include main.h
#include <stdio.h>

/**
 * my_charprint - a function that print characters.
 * @count: counting the character. 
 * Return: nothing 0.
 */
int my_charprint(va_list count)
{
	my_write_abg(va_arg(count, int));
	return (1);
}
