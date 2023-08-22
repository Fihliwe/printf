#include"main.h"
/**
 * handle_binary - converts b
 * @args: arguments
 * @chars: pointer
 */
void convert_binary(va_list args, int *chars)
{
	unsigned int z = va_arg(args, unsigned int);
	int i, bit = 0;
	unsigned int bin = z;

	if (z == 0)
	{
		putchar('0');
		(*chars)++;
		return;
	}
	while (bin > 0)
	{
		bin /= 2;
		bit++;
	}
	for (i = bit - 1; i >= 0; i--)
	{
		putchar(((z >> i) & 1) + '0');
		(*chars)++;
	}
}
