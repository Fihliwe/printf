#include"main.h"
/**
 * convert_decimal - function for integer
 * @args: arguments
 * @char: character
 */

void convert_decimal(va_list args, int *chars)
{
	int j = va_arg(args, int);
	int num_digits = 0, z, i;
	int num = j;
	char digit[12];

	if (j == 0)
	{
		putchar('0');
		(*chars)++;
		return;
	}
	if (j < 0)
	{
		putchar('-');
		num = -j;
	}
	while (num != 0)
	{
		num /= 10;
		num_digits++;
	}
	z = num_digits - 1;
	num = j < 0 ? -j : j;
	do {
		digit[z] = num % 10 + '0';
		num /= 10;
		z--;
	} 
	while (num != 0);
	
	for (i = 0; i < num_digits; i++)
	{
		putchar(digit[i]);
		(*chars)++;
	}
}
