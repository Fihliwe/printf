#include"main.h"
/**
 * convert_hex - function for the hexidecimal
 * @args: arguments
 * @count: pointer
 * @upper: determine uppercase
 */
void convert_hex(va_list args, int *chars, int upper)
{
	unsigned int j = va_arg(args, unsigned int);
	int z, i, rem, num = 0;
	unsigned int x = j;
	char digit[12];

	if (j == 0)
	{
		putchar('0');
		(*chars)++;
		return;
	}
	while (x != 0)
	{
		x = x / 16;
		num++;
	}
	z = num - 1;
	x = j;
	do {
		rem = x % 16;
		digit[z] = (rem < 10) ? (rem + '0') :
			(rem - 10 + (upper ? 'A' : 'a'));
		x = x / 16;
		z--;
	} 
	
	while (x != 0);
	for (i = 0; i < num; i++)
	{
		putchar(digit[i]);
		(*chars)++;
	}
}
/**
 * convert_lower_hex - function for lower case
 * @args: arguments
 * @count: character
 */
void convert_lower_hex(va_list args, int *chars)
{
	convert_hex(args, chars, 0);
}
/**
 * convert_upper_hex - handle upper case
 * @args: arguments
 * @count: pointer
 */
void convert_upper_hex(va_list args, int *chars)
{
	convert_hex(args, chars, 1);
}
