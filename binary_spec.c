#include "main.h"

/* converts a decimal number into a binary number and stores it in an array called abigail */

int binary_specifier(int decimal_num)
{ 
	int abigail[32];
	int i = 0;
	num_of_characters_printed = 0;

	while (decimal_num >= 2) /* loop breaks when digit is < 2 */
	{ 
		abigail[i] = decimal_num % 2;
		decimal_num /= 2;
		i++;
	}

	abigail[i] = decimal_num; 

	for(i; i >= 0; i--)
	{
		num_of_characters_printed += my_putchar(abigail[i] + '0');
	}

	return (num_of_characters_printed);
}
