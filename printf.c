#include <stdarg.h>
#include <stdio.h>
#include "main.h"

int print_integer(int value);
void print_buffer(char buffer[], int *buff_ind);

#define BUFF_SIZE 4096

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int printed = 0;
	int buff_ind = 0;
	char buffer[BUFF_SIZE];

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				buffer[buff_ind++] = '%';
				if (buff_ind == BUFF_SIZE)
				{
					print_buffer(buffer, &buff_ind);
					count += buff_ind;
				}
			}
			else if (*format == 'c')
			{
				int ch = va_arg(args, int);
				buffer[buff_ind++] = ch;
				if (buff_ind == BUFF_SIZE)
				{
					print_buffer(buffer, &buff_ind);
					count += buff_ind;
				}
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);
				while (*str)
				{
					buffer[buff_ind++] = *str;
					str++;
					if (buff_ind == BUFF_SIZE)
					{
						print_buffer(buffer, &buff_ind);
						count += buff_ind;
					}
				}
			}
			else if (*format == 'd' || *format == 'i')
			{
				int value = va_arg(args, int);
				printed = print_integer(value);
				count += printed;
			}
		}
		else
		{
			buffer[buff_ind++] = *format;
			if (buff_ind == BUFF_SIZE)
			{
				print_buffer(buffer, &buff_ind);
				count += buff_ind;
			}
		}

		format++;
	}
	print_buffer(buffer, &buff_ind);
	count += buff_ind;
	va_end(args);
	return (count);
}

int print_integer(int value)
{
	int j = 0;
	int i = 0;
	char buffer[32];
	int printed = 0;

	if (value < 0)
	{
		_putchar('-');
		printed++;
		value = -value;
	}

	do
	{
		buffer[i++] = '0' + (value % 10);
		value /= 10;
		printed++;
	} while (value > 0);

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
	}
	return printed;
}

void print_buffer(char buffer[], int *buff_ind)
{
	int i= 0;

	if (*buff_ind > 0)
	{
		for (i = 0; i < *buff_ind; i++)
		{
			_putchar(buffer[i]);
		}
	}
	*buff_ind = 0;
}
