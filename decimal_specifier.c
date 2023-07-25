#include "main.h" 

/**
 * Signed decimal integer
 * @digit: integer value
 */

int decimal_specifier(int digit)
{
	int num_of_characters_printed = 0; 

	if (digit < 0) /* Negative decimal integers */
	{
		num_of_characters_printed += my_putchar('-');
		digit = digit * -1; /* digit are printed with '-' sign */
	}
/**
 * Using recursion to print the digits of number in reverse order,
 * starting from the last digit and ending with the first digit
 */
	if (digit / 10)
	{
		num_of_characters_printed += decimal_specifier(digit / 10);
	}

	num_of_characters_printed += my_putchar((digit % 10) + '0');
	return (num_of_characters_printed);
}
