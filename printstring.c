#include "main.h"
int i = 0;

int print_string(char *str)
{
	int num_of_characters_printed = 0;

	for (; str[i] != '\0'; i++)
	{
		num_of_characters_printed += my_putchar(str[i]);
	}
	return (num_of_characters_printed);
}
