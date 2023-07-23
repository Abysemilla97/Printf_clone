#include "main.h"

/**
 * my_write_abg - a file that contains the write content.
 * @c: the charater content.
 * Return: nothing 0.
 */

int my_write_abg(char *c)
{
	return(write(1, &c, 1));
}
