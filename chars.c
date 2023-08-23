#include"main.h"
/**
 * convert_char - prints character
 * @args: arguments
 * @chars: character to be printed
 */

void convert_char(va_list args, int *chars)
{
	char i;

	i = (char)va_arg(args, int);

	putchar(i);
	(*chars)++;
}
