/*
 * Task: Write a function that produces output according to a format
 * Prototype: int _printf(const char *format, ...)
 * format is a character string with >= 0 directives
 * format specifiers c, s, and % are considered in this task
 * Author: Abigail Simon & Oku Umoren
 */

#include <stdarg.h> 
#include "main.h" 
#include <stdio.h> 

/**
 * _printf - a function that produces output according to a format
 * @format: a character string with zero or more directives
 * @...: varaible arguments passed to _printf function
 * Return: the number of characters printed without null bytes
 */

int _printf(const char *format, ...)
{
	int num_of_characters_printed = 0; /* num of characters returned */
	int i = 0; /* tracks iteration in loop */
	va_list checklist; /* Declaration of checklist */

	va_start(checklist, format); /* checklist starts from format */

	if (format == NULL)
		return (-1);

	for (; format[i] != '\0';) /* '\0' marks end of string */
		/* loops through string format until null character */
	{
		if (format[i] != '%')
		{
			num_of_characters_printed += my_putchar(format[i]);
			i++;
		}
		else if (format[i] == '%' && format[i+1] !=' ')
		{
			switch (format[i + 1]) /* evaluates each conversion specifier */
			{
				case 'c':
					num_of_characters_printed += my_putchar(va_arg(checklist, int));
					break;
				case 's':
					num_of_characters_printed += print_string(va_arg(checklist, char *));
					break;
				case '%':
					num_of_characters_printed += my_putchar('%');
					break;
				default:
					break;
			}
			i = i + 2; /* i is incremented by 2 if both conditions are True */
		}
	}
	return (num_of_characters_printed);
}
