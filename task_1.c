#include "main.h"
/**
 * convert_spec_1 - function for conversion specifier
 * @format: character string
 * Return: characters
 */

int convert_spec_1(const char *format, ...)
{
	va_list args;
	int chars = 0;
	int x;
	int y;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			if (*format == '\0')
				break;

			if (*format == 'd' || *format == 'i')
			{
				printf("%d%i", x, y);
				chars++;
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
