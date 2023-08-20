#include "main.h"

/**
 *convert_spec_1 - function for conversion specifier
 *@format: character string
 *Return: character
 */

int convert_spec_1(const char *format, ...)
{
	va_list args;
	int chars = 0;
	int x;
	int z;
	char *strr;

	va_start(args, *format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			if (*format == '\0')
				break;

			if (*format == 'd')
			{
				x = va_arg(args, int);
				putchar(x);
				chars++;
			}

			else if (*format == 'i')
			{
				x = va_arg(args, int);
				putchar(x);
				chars++;
			}

			else if (*format == 'c')
			{
				z = va_arg(args, int);
				putchar(z);
				chars++;
			}

			else if (*format == 's')
			{
				strr = va_arg(args, char *);
				while (*strr);
				{
					putchar(*strr);
					strr++;
					chars++;
				}
			}

			else if (*format == '%')
			{
				putchar('%');
				chars++;
			}

			else
			{
				putchar('%');
				putchar(*format);
				chars += 2;
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
