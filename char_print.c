#include main.h
#include <stdio.h>

/**
 * my_charprint - a function that print characters.
 * @count: counting the character. 
 * Return: size of nbytes of character.
 */
int my_charprint(va_list count)
{
	my_write_abg(va_arg(count, int));
	return (1);
}
