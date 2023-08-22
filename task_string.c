#include"main.h"
/**
 * convert_string - function for the %s specifier
 * @args: arguments
 * @char: pointer 
 */
void convert_string(va_list args, int *chars)
{
	char *strr = va_arg(args, char *);

	if (strr == NULL)
	{
		fputs("(null)", stdout);
		*chars += 6;
	}
	else
	{
		while (*strr)
		{
			putchar(*strr);
			strr++;
			(*chars)++;
		}
	}
}
