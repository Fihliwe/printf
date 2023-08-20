#include "main.h"

/**
 * convert_spec_1 - function for conversion specifiers.
 * @format; character string
 * Return: character
 */

int convert_spec_1(const char *format, ...)
{
	va_list args;
	int chars = 0;
	char x;
	char *strr;

	va_start(args, *format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			if (*format == '\0')
				break;

			if (*format == 'd' && *format == 'i')
			{
				x = va_arg(args, int);
				putchar(x);
				chars++;
			}

		}
		else
		{
			putchar(*format);
			chars++;
		}

		format++;

	}

	va_end(args);

	return (chars);

}
