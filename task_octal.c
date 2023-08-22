#include"main.h"
/**
 * handle_octal - handle the o specifier
 * @args: va_list of arguments
 * @count: pointer to character
 */
void convert_octal(va_list args, int *chars)
{
	unsigned int z = va_arg(args, unsigned int);
	int j, i, x = 0;
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
		num /= 8;
		x++;
	}
	j = x - 1;
	num = z;
	do {
		digit[j] = num % 8 + '0';
		num /= 8;
		j--;
	} while (num != 0);
	for (i = 0; i < x; i++)
	{
		putchar(digit[i]);
		(*chars)++;
	}
}
