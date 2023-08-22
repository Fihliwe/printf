#include"main.h"
/**
 * convert_unsigned - function for the  u specifier
 * @args: arguments
 * @chars: character
 */
void convert_unsigned(va_list args, int *chars)
{
	unsigned int z = va_arg(args, unsigned int);
	int j, i, num = 0;
	unsigned int x = z;
	char digit[12];

	if (z == 0)
	{
		putchar('0');
		(*chars)++;
		return;
	}
	
	while (x != 0)
	{
		x = x / 10;
		num++;
	}
	j = num - 1;
	x = z;
	
	do {
		digit[j] = x % 10 + '0';
		x = x / 10;
		j--;
	} 
	
	while (x != 0);
	
	for (i = 0; i < num; i++)
	{
		putchar(digit[i]);
		(*chars)++;
	}
}
