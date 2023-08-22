#include"main.h"
/**
 * convert_octal - function for octal
 * @args: arguments
 * @chars: pointer 
 */
void convert_octal(va_list args, int *chars)
{
	unsigned int z = va_arg(args, unsigned int);
	int j, i, num = 0;
	unsigned int num = z;
	char digit[12];

	if (z == 0)
	{
		putchar('0');
		(*chars)++;
		return;
	}
	while (num != 0)
	{
		num = num / 8;
		num++;
	}
	j = num - 1;
	num = z;
	do {
		digit[j] = num % 8 + '0';
		num = num / 8;
		j--;
	} while (num != 0);
	for (i = 0; i < num; i++)
	{
		putchar(digit[i]);
		(*chars)++;
	}
}
