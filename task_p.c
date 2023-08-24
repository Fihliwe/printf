#include"main.h"
/**
 * handle_address - function for the p specifier
 * @args: arguments
 * @chars: pointer 
 */
void convert_address(va_list args, int *chars)
{
	void *ptr = va_arg(args, void *);
	unsigned long address = (unsigned long)ptr;
	int i, num = 0;
	unsigned int digit;
	unsigned long temp = address;
	char digits[16];

	putchar('0');
	putchar('x');
	if (address == 0)
	{
		putchar('0');
		*chars += 3;
		return;
	}
	while (temp != 0)
	{
		temp >>= 4;
		num++;
	}
	if (num == 0)
	{
		num = 1;
		putchar('0');
		putchar('x');
	}
	for (i = 0; i < num; i++)
	{
		digit = (address >> (4 * i)) & 0xF;
		digit[num - i - 1] = (digit < 10) ?
			(digit + '0') : (digit - 10 + 'a');
	}
	for (i = 0; i < num; i++)
	{
		putchar(digit[i]);
		(*chars)++;
	}
}
