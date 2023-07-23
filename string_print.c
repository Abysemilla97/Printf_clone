#include "main.h"
#include <stdio.h>

/**
 * my_stringprint - a function that print string.
 * @count: number of count.
 * Return: size of nbytes of character.
 */
int my_stringprint(va_list count)
{
	int = 0;
	char *strg = va_arg(count, char *);

	if (strg == NULL)
		strg = ("(null)");
	while (strg[i])
		my_write_abg(str[i++]);
	return (i);
}

